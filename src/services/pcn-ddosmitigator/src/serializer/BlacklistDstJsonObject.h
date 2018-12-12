/**
* ddosmitigator API
* DDoS Mitigator Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* BlacklistDstJsonObject.h
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
class  BlacklistDstJsonObject : public JsonObjectBase {
public:
  BlacklistDstJsonObject();
  virtual ~BlacklistDstJsonObject();

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
  /// BlacklistDstJsonObject members

  /// <summary>
  /// Destination IP Address
  /// </summary>
  std::string getIp() const;
  void setIp(std::string value);
  bool ipIsSet() const;
  void unsetIp();

  /// <summary>
  /// Dropped Packets
  /// </summary>
  uint64_t getDropPkts() const;
  void setDropPkts(uint64_t value);
  bool dropPktsIsSet() const;
  void unsetDropPkts();


protected:
  std::string m_ip;
  bool m_ipIsSet;
  uint64_t m_dropPkts;
  bool m_dropPktsIsSet;

  std::vector<std::string> allowedParameters_{ "ip", "drop-pkts" };
};

}
}
}
}

