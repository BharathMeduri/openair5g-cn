/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -D ./generated/`
 */

#ifndef	_AMF_TNLAssociationToRemoveList_H_
#define	_AMF_TNLAssociationToRemoveList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AMF_TNLAssociationToRemoveItem;

/* AMF-TNLAssociationToRemoveList */
typedef struct AMF_TNLAssociationToRemoveList {
	A_SEQUENCE_OF(struct AMF_TNLAssociationToRemoveItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AMF_TNLAssociationToRemoveList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AMF_TNLAssociationToRemoveList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AMF-TNLAssociationToRemoveItem.h"

#endif	/* _AMF_TNLAssociationToRemoveList_H_ */
#include <asn_internal.h>