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
 * IntegrityAlgorithm.h
 *
 * 
 */

#ifndef IntegrityAlgorithm_H_
#define IntegrityAlgorithm_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  IntegrityAlgorithm
    : public ModelBase
{
public:
    IntegrityAlgorithm();
    virtual ~IntegrityAlgorithm();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// IntegrityAlgorithm members


protected:
};

}
}
}
}

#endif /* IntegrityAlgorithm_H_ */
