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


#include "EbiArpMapping.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EbiArpMapping::EbiArpMapping()
{
    m_EpsBearerId = 0;
    
}

EbiArpMapping::~EbiArpMapping()
{
}

void EbiArpMapping::validate()
{
    // TODO: implement validation
}

nlohmann::json EbiArpMapping::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["epsBearerId"] = m_EpsBearerId;
    val["arp"] = ModelBase::toJson(m_Arp);
    

    return val;
}

void EbiArpMapping::fromJson(const nlohmann::json& val)
{
    setEpsBearerId(val.at("epsBearerId"));
    
}


int32_t EbiArpMapping::getEpsBearerId() const
{
    return m_EpsBearerId;
}
void EbiArpMapping::setEpsBearerId(int32_t const value)
{
    m_EpsBearerId = value;
    
}
Arp_2 EbiArpMapping::getArp() const
{
    return m_Arp;
}
void EbiArpMapping::setArp(Arp_2 const& value)
{
    m_Arp = value;
    
}

}
}
}
}

