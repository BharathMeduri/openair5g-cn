/**
* AMF MT Service
* AMF Mobile Termination Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* ProvideDomainSelectionInfoApiImpl.h
*
* 
*/

#ifndef PROVIDE_DOMAIN_SELECTION_INFO_API_IMPL_H_
#define PROVIDE_DOMAIN_SELECTION_INFO_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <ProvideDomainSelectionInfoApi.h>

#include <pistache/optional.h>

#include "ProblemDetails.h"
#include "UeContextInfo.h"
#include "UeContextInfoClass.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class ProvideDomainSelectionInfoApiImpl : public org::openapitools::server::api::ProvideDomainSelectionInfoApi {
public:
    ProvideDomainSelectionInfoApiImpl(std::shared_ptr<Pistache::Rest::Router>);
    ~ProvideDomainSelectionInfoApiImpl() {}

    void provide_domain_selection_info(const std::string &ueContextId, const Pistache::Optional<UeContextInfoClass> &infoClass, const Pistache::Optional<std::string> &supportedFeatures, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif