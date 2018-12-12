/**
* simplebridge API
* Simple L2 Bridge Service
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* SimplebridgeJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "PortsJsonObject.h"
#include <vector>
#include "FdbJsonObject.h"
#include "polycube/services/cube.h"

using polycube::service::CubeType;

namespace io {
namespace swagger {
namespace server {
namespace model {

enum class SimplebridgeLoglevelEnum {
  TRACE, DEBUG, INFO, WARN, ERR, CRITICAL, OFF
};

/// <summary>
///
/// </summary>
class  SimplebridgeJsonObject : public JsonObjectBase {
public:
  SimplebridgeJsonObject();
  virtual ~SimplebridgeJsonObject();

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
  /// SimplebridgeJsonObject members

  /// <summary>
  /// Name of the simplebridge service
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;
  void unsetName();

  /// <summary>
  /// UUID of the Cube
  /// </summary>
  std::string getUuid() const;
  void setUuid(std::string value);
  bool uuidIsSet() const;
  void unsetUuid();

  /// <summary>
  /// Type of the Cube (TC, XDP_SKB, XDP_DRV)
  /// </summary>
  CubeType getType() const;
  void setType(CubeType value);
  bool typeIsSet() const;
  void unsetType();
  static std::string CubeType_to_string(const CubeType &value);
  static CubeType string_to_CubeType(const std::string &str);

  /// <summary>
  /// Defines the logging level of a service instance, from none (OFF) to the most verbose (TRACE)
  /// </summary>
  SimplebridgeLoglevelEnum getLoglevel() const;
  void setLoglevel(SimplebridgeLoglevelEnum value);
  bool loglevelIsSet() const;
  void unsetLoglevel();
  static std::string SimplebridgeLoglevelEnum_to_string(const SimplebridgeLoglevelEnum &value);
  static SimplebridgeLoglevelEnum string_to_SimplebridgeLoglevelEnum(const std::string &str);
  polycube::LogLevel getPolycubeLoglevel() const;
  /// <summary>
  /// Entry of the ports table
  /// </summary>
  const std::vector<PortsJsonObject>& getPorts() const;
  void addPorts(PortsJsonObject value);
  bool portsIsSet() const;
  void unsetPorts();

  /// <summary>
  ///
  /// </summary>
  FdbJsonObject getFdb() const;
  void setFdb(FdbJsonObject value);
  bool fdbIsSet() const;
  void unsetFdb();


protected:
  std::string m_name;
  bool m_nameIsSet;
  std::string m_uuid;
  bool m_uuidIsSet;
  CubeType m_type;
  bool m_typeIsSet;
  SimplebridgeLoglevelEnum m_loglevel;
  bool m_loglevelIsSet;
  std::vector<PortsJsonObject> m_ports;
  bool m_portsIsSet;
  FdbJsonObject m_fdb;
  bool m_fdbIsSet;

  std::vector<std::string> allowedParameters_{ "name", "uuid", "type", "loglevel", "ports", "fdb" };
};

}
}
}
}

