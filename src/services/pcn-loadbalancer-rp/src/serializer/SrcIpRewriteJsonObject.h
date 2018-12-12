/**
* lbrp API
* LoadBalancer Reverse-Proxy Service
*
* OpenAPI spec version: 2.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* SrcIpRewriteJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  SrcIpRewriteJsonObject : public JsonObjectBase {
public:
  SrcIpRewriteJsonObject();
  virtual ~SrcIpRewriteJsonObject();

  /////////////////////////////////////////////
  /// JsonObjectBase overrides

  void validateKeys() override;
  void validateMandatoryFields() override;
  void validateParams() override;

  nlohmann::json toJson() const override;
  void fromJson(nlohmann::json& json) override;

  static nlohmann::json helpKeys();
  static nlohmann::json helpElements();
  static nlohmann::json helpWritableLeafs();
  static nlohmann::json helpComplexElements();
  static std::vector<std::string> helpActions();
  /////////////////////////////////////////////
  /// SrcIpRewriteJsonObject members

  /// <summary>
  /// Range of IP addresses of the clients that must be replaced
  /// </summary>
  std::string getIpRange() const;
  void setIpRange(std::string value);
  bool ipRangeIsSet() const;
  void unsetIpRange();

  /// <summary>
  /// Range of IP addresses of the that must be used to replace client addresses
  /// </summary>
  std::string getNewIpRange() const;
  void setNewIpRange(std::string value);
  bool newIpRangeIsSet() const;
  void unsetNewIpRange();


protected:
  std::string m_ipRange;
  bool m_ipRangeIsSet;
  std::string m_newIpRange;
  bool m_newIpRangeIsSet;

  std::vector<std::string> allowedParameters_{ "ip-range", "new_ip_range" };
};

}
}
}
}

