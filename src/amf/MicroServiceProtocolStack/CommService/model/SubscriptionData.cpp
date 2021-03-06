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


#include "SubscriptionData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

SubscriptionData::SubscriptionData()
{
    m_AmfStatusUri = "";
    m_GuamisIsSet = false;

}

SubscriptionData::~SubscriptionData()
{
}

void SubscriptionData::validate()
{
    // TODO: implement validation
}

nlohmann::json SubscriptionData::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["amfStatusUri"] = ModelBase::toJson(m_AmfStatusUri);
    if(m_GuamisIsSet)
    {
        val["guamis"] = ModelBase::toJson(m_Guamis);
    }


    return val;
}

void SubscriptionData::fromJson(const nlohmann::json& val)
{
    setAmfStatusUri(val.at("amfStatusUri"));
    if(val.find("guamis") == val.end())
    {
        if(!val["guamis"].is_null())
        {
            Guami newItem;
            newItem.fromJson(val["guamis"]);
            setGuamis( newItem );
        }

    }

}


std::string SubscriptionData::getAmfStatusUri() const
{
    return m_AmfStatusUri;
}
void SubscriptionData::setAmfStatusUri(std::string const& value)
{
    m_AmfStatusUri = value;

}
Guami SubscriptionData::getGuamis() const
{
    return m_Guamis;
}
void SubscriptionData::setGuamis(Guami const& value)
{
    m_Guamis = value;
    m_GuamisIsSet = true;
}
bool SubscriptionData::guamisIsSet() const
{
    return m_GuamisIsSet;
}
void SubscriptionData::unsetGuamis()
{
    m_GuamisIsSet = false;
}

}
}
}
}

