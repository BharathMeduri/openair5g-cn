#include <stdint.h>
#include "bstrlib.h"

#define NAS_SECURITY_ALGORITHMS_MINIMUM_LENGTH 2
#define NAS_SECURITY_ALGORITHMS_MAXIMUM_LENGTH 2


#define NAS_SECURITY_ALGORITHMS_NEA0 0b0000
#define NAS_SECURITY_ALGORITHMS_NEA1 0b0001
#define NAS_SECURITY_ALGORITHMS_NEA2 0b0010
#define NAS_SECURITY_ALGORITHMS_NEA3 0b0011
#define NAS_SECURITY_ALGORITHMS_NEA4 0b0100
#define NAS_SECURITY_ALGORITHMS_NEA5 0b0101
#define NAS_SECURITY_ALGORITHMS_NEA6 0b0110
#define NAS_SECURITY_ALGORITHMS_NEA7 0b0111


#define NAS_SECURITY_ALGORITHMS_NIA0 0b0000
#define NAS_SECURITY_ALGORITHMS_NIA1 0b0001
#define NAS_SECURITY_ALGORITHMS_NIA2 0b0010
#define NAS_SECURITY_ALGORITHMS_NIA3 0b0011
#define NAS_SECURITY_ALGORITHMS_NIA4 0b0100
#define NAS_SECURITY_ALGORITHMS_NIA5 0b0101
#define NAS_SECURITY_ALGORITHMS_NIA6 0b0110
#define NAS_SECURITY_ALGORITHMS_NIA7 0b0111

typedef bstring NASSecurityAlgorithms;

int encode_nas_security_algorithms ( NASSecurityAlgorithms nassecurityalgorithms, uint8_t iei, uint8_t * buffer, uint32_t len  ) ;
int decode_nas_security_algorithms ( NASSecurityAlgorithms * nassecurityalgorithms, uint8_t iei, uint8_t * buffer, uint32_t len  ) ;

