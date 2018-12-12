/**
* simpleforwarder API
* Simple Forwarder Base Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* PortsJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {

enum class PortsStatusEnum {
  UP, DOWN
};

/// <summary>
///
/// </summary>
class  PortsJsonObject : public JsonObjectBase {
public:
  PortsJsonObject();
  virtual ~PortsJsonObject();

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
  /// PortsJsonObject members

  /// <summary>
  /// Port Name
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;
  void unsetName();

  /// <summary>
  /// UUID of the port
  /// </summary>
  std::string getUuid() const;
  void setUuid(std::string value);
  bool uuidIsSet() const;
  void unsetUuid();

  /// <summary>
  /// Status of the port (UP or DOWN)
  /// </summary>
  PortsStatusEnum getStatus() const;
  void setStatus(PortsStatusEnum value);
  bool statusIsSet() const;
  void unsetStatus();
  static std::string PortsStatusEnum_to_string(const PortsStatusEnum &value);
  static PortsStatusEnum string_to_PortsStatusEnum(const std::string &str);

  /// <summary>
  /// Peer name, such as a network interfaces (e.g., &#39;veth0&#39;) or another cube (e.g., &#39;br1:port2&#39;)
  /// </summary>
  std::string getPeer() const;
  void setPeer(std::string value);
  bool peerIsSet() const;
  void unsetPeer();


protected:
  std::string m_name;
  bool m_nameIsSet;
  std::string m_uuid;
  bool m_uuidIsSet;
  PortsStatusEnum m_status;
  bool m_statusIsSet;
  std::string m_peer;
  bool m_peerIsSet;

  std::vector<std::string> allowedParameters_{ "name", "uuid", "status", "peer" };
};

}
}
}
}

