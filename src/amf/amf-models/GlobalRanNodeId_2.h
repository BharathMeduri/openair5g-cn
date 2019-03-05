/**
* Namf_EventExposure Service
* AMF Event Exposure Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * GlobalRanNodeId_2.h
 *
 * 
 */

#ifndef GlobalRanNodeId_2_H_
#define GlobalRanNodeId_2_H_


#include "ModelBase.h"

#include <string>
#include "PlmnId.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GlobalRanNodeId_2
    : public ModelBase
{
public:
    GlobalRanNodeId_2();
    virtual ~GlobalRanNodeId_2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// GlobalRanNodeId_2 members

    /// <summary>
    /// 
    /// </summary>
    PlmnId getPlmnId() const;
    void setPlmnId(PlmnId const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getN3IwfId() const;
    void setN3IwfId(std::string const& value);
    bool n3IwfIdIsSet() const;
    void unsetN3IwfId();
    /// <summary>
    /// 
    /// </summary>
    std::string getNgRanNodeId() const;
    void setNgRanNodeId(std::string const& value);
    bool ngRanNodeIdIsSet() const;
    void unsetNgRanNodeId();

protected:
    PlmnId m_PlmnId;

    std::string m_N3IwfId;
    bool m_N3IwfIdIsSet;
    std::string m_NgRanNodeId;
    bool m_NgRanNodeIdIsSet;
};

}
}
}
}

#endif /* GlobalRanNodeId_2_H_ */