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



#include "ChainApplyRulesOutputJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

ChainApplyRulesOutputJsonObject::ChainApplyRulesOutputJsonObject() {

  m_resultIsSet = false;
}

ChainApplyRulesOutputJsonObject::~ChainApplyRulesOutputJsonObject() {}

void ChainApplyRulesOutputJsonObject::validateKeys() {

}

void ChainApplyRulesOutputJsonObject::validateMandatoryFields() {

}

void ChainApplyRulesOutputJsonObject::validateParams() {

}

nlohmann::json ChainApplyRulesOutputJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();

  if (m_resultIsSet) {
    val["result"] = m_result;
  }


  return val;
}

void ChainApplyRulesOutputJsonObject::fromJson(nlohmann::json& val) {
  for(nlohmann::json::iterator it = val.begin(); it != val.end(); ++it) {
    std::string key = it.key();
    bool found = (std::find(allowedParameters_.begin(), allowedParameters_.end(), key) != allowedParameters_.end());
    if (!found) {
      throw std::runtime_error(key + " is not a valid parameter");
      return;
    }
  }

  if (val.find("result") != val.end()) {
    setResult(val.at("result"));
  }
}

nlohmann::json ChainApplyRulesOutputJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json ChainApplyRulesOutputJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["result"]["name"] = "result";
  val["result"]["type"] = "leaf"; // Suppose that type is leaf
  val["result"]["simpletype"] = "boolean";
  val["result"]["description"] = R"POLYCUBE(True if the operation is successful)POLYCUBE";
  val["result"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json ChainApplyRulesOutputJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();

  val["result"]["name"] = "result";
  val["result"]["simpletype"] = "boolean";
  val["result"]["description"] = R"POLYCUBE(True if the operation is successful)POLYCUBE";
  val["result"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json ChainApplyRulesOutputJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

std::vector<std::string> ChainApplyRulesOutputJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

bool ChainApplyRulesOutputJsonObject::getResult() const {
  return m_result;
}

void ChainApplyRulesOutputJsonObject::setResult(bool value) {
  m_result = value;
  m_resultIsSet = true;
}

bool ChainApplyRulesOutputJsonObject::resultIsSet() const {
  return m_resultIsSet;
}

void ChainApplyRulesOutputJsonObject::unsetResult() {
  m_resultIsSet = false;
}




}
}
}
}

