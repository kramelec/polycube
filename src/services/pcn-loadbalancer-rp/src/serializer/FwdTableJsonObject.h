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
* FwdTableJsonObject.h
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
class  FwdTableJsonObject : public JsonObjectBase {
public:
  FwdTableJsonObject();
  virtual ~FwdTableJsonObject();

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
  /// FwdTableJsonObject members

  /// <summary>
  /// Destination IP address
  /// </summary>
  std::string getAddress() const;
  void setAddress(std::string value);
  bool addressIsSet() const;
  void unsetAddress();

  /// <summary>
  /// Destination MAC address
  /// </summary>
  std::string getMac() const;
  void setMac(std::string value);
  bool macIsSet() const;
  void unsetMac();

  /// <summary>
  /// Port where this entry is present
  /// </summary>
  std::string getPort() const;
  void setPort(std::string value);
  bool portIsSet() const;
  void unsetPort();


protected:
  std::string m_address;
  bool m_addressIsSet;
  std::string m_mac;
  bool m_macIsSet;
  std::string m_port;
  bool m_portIsSet;

  std::vector<std::string> allowedParameters_{ "address", "mac", "port" };
};

}
}
}
}

