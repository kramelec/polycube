/**
* router API
* Router Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* ArpEntryJsonObject.h
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
class  ArpEntryJsonObject : public JsonObjectBase {
public:
  ArpEntryJsonObject();
  virtual ~ArpEntryJsonObject();

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
  /// ArpEntryJsonObject members

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
  /// Outgoing interface
  /// </summary>
  std::string getInterface() const;
  void setInterface(std::string value);
  bool interfaceIsSet() const;
  void unsetInterface();


protected:
  std::string m_address;
  bool m_addressIsSet;
  std::string m_mac;
  bool m_macIsSet;
  std::string m_interface;
  bool m_interfaceIsSet;

  std::vector<std::string> allowedParameters_{ "address", "mac", "interface" };
};

}
}
}
}

