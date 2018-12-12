/**
* iptables API
* iptables API generated from iptables.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* ChainJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "ChainRuleJsonObject.h"
#include "ChainStatsJsonObject.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {

enum class ChainNameEnum {
  INPUT, FORWARD, OUTPUT, INVALID_INGRESS, INVALID_EGRESS
};
#ifndef ACTIONENUM
#define ACTIONENUM
enum class ActionEnum {
  DROP, LOG, ACCEPT
};
#endif

/// <summary>
///
/// </summary>
class  ChainJsonObject : public JsonObjectBase {
public:
  ChainJsonObject();
  virtual ~ChainJsonObject();

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
  /// ChainJsonObject members

  /// <summary>
  /// Chain in which the rule will be inserted. Default: FORWARD.
  /// </summary>
  ChainNameEnum getName() const;
  void setName(ChainNameEnum value);
  bool nameIsSet() const;
  void unsetName();
  static std::string ChainNameEnum_to_string(const ChainNameEnum &value);
  static ChainNameEnum string_to_ChainNameEnum(const std::string &str);

  /// <summary>
  /// Default action if no rule matches in the ingress chain. Default is DROP.
  /// </summary>
  ActionEnum getDefault() const;
  void setDefault(ActionEnum value);
  bool defaultIsSet() const;
  void unsetDefault();
  static std::string ActionEnum_to_string(const ActionEnum &value);
  static ActionEnum string_to_ActionEnum(const std::string &str);

  /// <summary>
  ///
  /// </summary>
  const std::vector<ChainStatsJsonObject>& getStats() const;
  void addChainStats(ChainStatsJsonObject value);
  bool statsIsSet() const;
  void unsetStats();

  /// <summary>
  ///
  /// </summary>
  const std::vector<ChainRuleJsonObject>& getRule() const;
  void addChainRule(ChainRuleJsonObject value);
  bool ruleIsSet() const;
  void unsetRule();


protected:
  ChainNameEnum m_name;
  bool m_nameIsSet;
  ActionEnum m_default;
  bool m_defaultIsSet;
  std::vector<ChainStatsJsonObject> m_stats;
  bool m_statsIsSet;
  std::vector<ChainRuleJsonObject> m_rule;
  bool m_ruleIsSet;

  std::vector<std::string> allowedParameters_{ "name", "default", "stats", "rule" };
};

}
}
}
}

