/**
* nat API
* NAT Service
*
* OpenAPI spec version: 1.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "RuleMasqueradeJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

RuleMasqueradeJsonObject::RuleMasqueradeJsonObject() {

  m_enabledIsSet = false;
}

RuleMasqueradeJsonObject::~RuleMasqueradeJsonObject() {}

void RuleMasqueradeJsonObject::validateKeys() {

}

void RuleMasqueradeJsonObject::validateMandatoryFields() {

}

void RuleMasqueradeJsonObject::validateParams() {

}

nlohmann::json RuleMasqueradeJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();

  if (m_enabledIsSet) {
    val["enabled"] = m_enabled;
  }


  return val;
}

void RuleMasqueradeJsonObject::fromJson(nlohmann::json& val) {
  for(nlohmann::json::iterator it = val.begin(); it != val.end(); ++it) {
    std::string key = it.key();
    bool found = (std::find(allowedParameters_.begin(), allowedParameters_.end(), key) != allowedParameters_.end());
    if (!found) {
      throw std::runtime_error(key + " is not a valid parameter");
      return;
    }
  }

  if (val.find("enabled") != val.end()) {
    setEnabled(val.at("enabled"));
  }
}

nlohmann::json RuleMasqueradeJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json RuleMasqueradeJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["enabled"]["name"] = "enabled";
  val["enabled"]["type"] = "leaf"; // Suppose that type is leaf
  val["enabled"]["simpletype"] = "boolean";
  val["enabled"]["description"] = R"POLYCUBE()POLYCUBE";
  val["enabled"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json RuleMasqueradeJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();

  val["enabled"]["name"] = "enabled";
  val["enabled"]["simpletype"] = "boolean";
  val["enabled"]["description"] = R"POLYCUBE()POLYCUBE";
  val["enabled"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json RuleMasqueradeJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

std::vector<std::string> RuleMasqueradeJsonObject::helpActions() {
  std::vector<std::string> val;
  val.push_back("enable");
  val.push_back("disable");
  return val;
}

bool RuleMasqueradeJsonObject::getEnabled() const {
  return m_enabled;
}

void RuleMasqueradeJsonObject::setEnabled(bool value) {
  m_enabled = value;
  m_enabledIsSet = true;
}

bool RuleMasqueradeJsonObject::enabledIsSet() const {
  return m_enabledIsSet;
}

void RuleMasqueradeJsonObject::unsetEnabled() {
  m_enabledIsSet = false;
}




}
}
}
}

