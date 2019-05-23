/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer_H_
#define	_Ngap_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_RRCContainer.h"
#include "Ngap_NGRAN-CGI.h"
#include "Ngap_IndexToRFSP.h"
#include "Ngap_UEHistoryInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_PDUSessionResourceInformationList;
struct Ngap_E_RABInformationList;
struct Ngap_ProtocolExtensionContainer;

/* Ngap_SourceNGRANNode-ToTargetNGRANNode-TransparentContainer */
typedef struct Ngap_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer {
	Ngap_RRCContainer_t	 rRCContainer;
	struct Ngap_PDUSessionResourceInformationList	*pDUSessionResourceInformationList;	/* OPTIONAL */
	struct Ngap_E_RABInformationList	*e_RABInformationList;	/* OPTIONAL */
	Ngap_NGRAN_CGI_t	 targetCell_ID;
	Ngap_IndexToRFSP_t	*indexToRFSP;	/* OPTIONAL */
	Ngap_UEHistoryInformation_t	 uEHistoryInformation;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_SourceNGRANNode_ToTargetNGRANNode_TransparentContainer_H_ */
#include <asn_internal.h>