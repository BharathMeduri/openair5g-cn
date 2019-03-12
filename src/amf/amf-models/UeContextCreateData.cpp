/**
* AMF Communicaiton Service
* AMF Communication Service
*
* OpenAPI spec version: 1.R15.0.0
*
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include <iostream>
#include "UeContextCreateData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeContextCreateData::UeContextCreateData()
{
    m_NgapCause = 0;
    m_NgapCauseIsSet = false;
    m_SupportedFeatures = "";
    m_SupportedFeaturesIsSet = false;

}

UeContextCreateData::~UeContextCreateData()
{
}

void UeContextCreateData::validate()
{
    // TODO: implement validation
}

nlohmann::json UeContextCreateData::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["ueContext"] = ModelBase::toJson(m_UeContext);
    val["targetId"] = ModelBase::toJson(m_TargetId);
    val["sourceToTargetData"] = ModelBase::toJson(m_SourceToTargetData);
    val["pduSessions"] = ModelBase::toJson(m_PduSessions);
    if(m_NgapCauseIsSet)
    {
        val["ngapCause"] = m_NgapCause;
    }
    if(m_SupportedFeaturesIsSet)
    {
        val["supportedFeatures"] = ModelBase::toJson(m_SupportedFeatures);
    }


    return val;
}

void UeContextCreateData::fromJson(const nlohmann::json& val)
{
    //if(val.find("ueContext") != val.end())
    //{
        //std::cout<<"Found UeContext\n";
    ////m_UeContext = val.at("ueContext");
    ////UeContext value=val.at("ueContext");
    ////setUeContext(value);
    ////setUeContext(val.at("ueContext"));
    //}else
    //{
        //std::cout<<"Not Found UeContext\n";

    //}
    //if(val.find("pduSessions") != val.end())
    //{
        //setPduSessions(val.at("pduSessions"));
    //}
    //if(val.find("sourceToTargetData") != val.end())
    //{
        //setSourceToTargetData(val.at("sourceToTargetData"));
    //}
    //if(val.find("targetId")!=val.end())
    //{
        //setTargetId(val.at("targetId"));
    //}
    if(val.find("ngapCause") != val.end())
    {
        setNgapCause(val.at("ngapCause"));
    }
    if(val.find("supportedFeatures") != val.end())
    {
        setSupportedFeatures(val.at("supportedFeatures"));
    }

}


UeContext UeContextCreateData::getUeContext() const
{
    return m_UeContext;
}
void UeContextCreateData::setUeContext(UeContext const& value)
{
    m_UeContext = value;

}
NgRanTargetId UeContextCreateData::getTargetId() const
{
    return m_TargetId;
}
void UeContextCreateData::setTargetId(NgRanTargetId const& value)
{
    m_TargetId = value;

}
N2InfoContainer UeContextCreateData::getSourceToTargetData() const
{
    return m_SourceToTargetData;
}
void UeContextCreateData::setSourceToTargetData(N2InfoContainer const& value)
{
    m_SourceToTargetData = value;

}
N2SmInformation UeContextCreateData::getPduSessions() const
{
    return m_PduSessions;
}
void UeContextCreateData::setPduSessions(N2SmInformation const& value)
{
    m_PduSessions = value;

}
int32_t UeContextCreateData::getNgapCause() const
{
    return m_NgapCause;
}
void UeContextCreateData::setNgapCause(int32_t const value)
{
    m_NgapCause = value;
    m_NgapCauseIsSet = true;
}
bool UeContextCreateData::ngapCauseIsSet() const
{
    return m_NgapCauseIsSet;
}
void UeContextCreateData::unsetNgapCause()
{
    m_NgapCauseIsSet = false;
}
std::string UeContextCreateData::getSupportedFeatures() const
{
    return m_SupportedFeatures;
}
void UeContextCreateData::setSupportedFeatures(std::string const& value)
{
    m_SupportedFeatures = value;
    m_SupportedFeaturesIsSet = true;
}
bool UeContextCreateData::supportedFeaturesIsSet() const
{
    return m_SupportedFeaturesIsSet;
}
void UeContextCreateData::unsetSupportedFeatures()
{
    m_SupportedFeaturesIsSet = false;
}

}
}
}
}

