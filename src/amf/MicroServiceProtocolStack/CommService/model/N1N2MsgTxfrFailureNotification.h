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
 * N1N2MsgTxfrFailureNotification.h
 *
 * 
 */

#ifndef N1N2MsgTxfrFailureNotification_H_
#define N1N2MsgTxfrFailureNotification_H_


#include "ModelBase.h"

#include "N1N2MessageTransferCause.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  N1N2MsgTxfrFailureNotification
    : public ModelBase
{
public:
    N1N2MsgTxfrFailureNotification();
    virtual ~N1N2MsgTxfrFailureNotification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// N1N2MsgTxfrFailureNotification members

    /// <summary>
    /// 
    /// </summary>
    N1N2MessageTransferCause getCause() const;
    void setCause(N1N2MessageTransferCause const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getN1n2MsgDataUri() const;
    void setN1n2MsgDataUri(std::string const& value);
    
protected:
    N1N2MessageTransferCause m_Cause;

    std::string m_N1n2MsgDataUri;

};

}
}
}
}

#endif /* N1N2MsgTxfrFailureNotification_H_ */
