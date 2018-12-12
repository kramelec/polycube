/**
* lbdsr API
* LoadBalancer Direct Server Return Service
*
* OpenAPI spec version: 2.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* FrontendJsonObject.h
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
class  FrontendJsonObject : public JsonObjectBase {
public:
  FrontendJsonObject();
  virtual ~FrontendJsonObject();

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
  /// FrontendJsonObject members

  /// <summary>
  /// IP address of the loadbalancer frontend
  /// </summary>
  std::string getVip() const;
  void setVip(std::string value);
  bool vipIsSet() const;
  void unsetVip();

  /// <summary>
  /// MAC address of the port
  /// </summary>
  std::string getMac() const;
  void setMac(std::string value);
  bool macIsSet() const;
  void unsetMac();


protected:
  std::string m_vip;
  bool m_vipIsSet;
  std::string m_mac;
  bool m_macIsSet;

  std::vector<std::string> allowedParameters_{ "vip", "mac" };
};

}
}
}
}

