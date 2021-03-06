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
/*
 * Snssai.h
 *
 * 
 */

#ifndef Snssai_H_
#define Snssai_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Snssai
    : public ModelBase
{
public:
    Snssai();
    virtual ~Snssai();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Snssai members

    /// <summary>
    /// 
    /// </summary>
    int32_t getSst() const;
    void setSst(int32_t const value);
        /// <summary>
    /// 
    /// </summary>
    std::string getSd() const;
    void setSd(std::string const& value);
    bool sdIsSet() const;
    void unsetSd();

protected:
    int32_t m_Sst;

    std::string m_Sd;
    bool m_SdIsSet;
};

}
}
}
}

#endif /* Snssai_H_ */
