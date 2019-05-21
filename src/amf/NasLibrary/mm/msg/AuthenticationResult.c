#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "TLVEncoder.h"
#include "TLVDecoder.h"
#include "AuthenticationResult.h"

int decode_authentication_result( authentication_result_msg *authentication_result, uint8_t* buffer, uint32_t len)
{
    uint32_t decoded = 0;
    int decoded_result = 0;

    // Check if we got a NULL pointer and if buffer length is >= minimum length expected for the message.
    printf("decode_authentication_result len:%d\n", len);
    CHECK_PDU_POINTER_AND_LENGTH_DECODER (buffer, AUTHENTICATION_RESULT_MINIMUM_LENGTH, len);
    
    if ((decoded_result = decode_u8_nas_key_set_identifier (&authentication_result->naskeysetidentifier, 0, *(buffer + decoded) >> 4, len - decoded)) < 0)
      return decoded_result;
    decoded++;
	printf("decoded:%d\n", decoded,decoded_result);
    if((decoded_result = decode_eap_message (&authentication_result->eapmessage, 0, buffer+decoded,len-decoded))<0)
        return decoded_result;
    else
        decoded+=decoded_result;
	int i = 0;
	printf("decoded:%d\n", decoded, decoded_result);
	 for(;i<30;i++)
	   printf("nas msg byte test bype[%d] = 0x%x\n",i,buffer[i]);
	 
    while(len-decoded>0){
      uint8_t ieiDecoded = *(buffer+decoded);
	  printf("ieiDecoded:0x%x\n", ieiDecoded);
	  sleep(1);
      if(ieiDecoded==0)
        break;
      switch(ieiDecoded){
        case AUTHENTICATION_RESULT_ABBA_IEI:
          if((decoded_result = decode_abba (&authentication_result->abba, AUTHENTICATION_RESULT_ABBA_IEI, buffer+decoded,len-decoded))<0)
            return decoded_result;
          else{
            decoded+=decoded_result;
            authentication_result->presence |= AUTHENTICATION_RESULT_ABBA_PRESENT;
          }
      }
    }
    return decoded;
}


int encode_authentication_result( authentication_result_msg *authentication_result, uint8_t* buffer, uint32_t len)
{
    uint32_t encoded = 0;
    int encoded_result = 0;
    
    // Check if we got a NULL pointer and if buffer length is >= minimum length expected for the message.
    CHECK_PDU_POINTER_AND_LENGTH_ENCODER (buffer, AUTHENTICATION_RESULT_MINIMUM_LENGTH, len);

    *(buffer + encoded) = ((encode_u8_nas_key_set_identifier(&authentication_result->naskeysetidentifier) & 0x0f) << 4) | 0x00;
    encoded ++;

    if((encoded_result = encode_eap_message (authentication_result->eapmessage, 0, buffer+encoded,len-encoded))<0)
        return encoded_result;
    else
        encoded+=encoded_result;
	printf("encode_authentication_result encoded:%d, encoded_result:%d\n", encoded,encoded_result);

    if((authentication_result->presence & AUTHENTICATION_RESULT_ABBA_PRESENT)
        == AUTHENTICATION_RESULT_ABBA_PRESENT){
      if((encoded_result = encode_abba (authentication_result->abba, AUTHENTICATION_RESULT_ABBA_IEI, buffer+encoded,len-encoded))<0)
        return encoded_result;
      else
        encoded+=encoded_result;
    }

    return encoded;
}
