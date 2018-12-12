/**
* k8switch API
* Kubernetes HyperSwitch Service
*
* OpenAPI spec version: 2.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "ServiceJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

ServiceJsonObject::ServiceJsonObject() {

  m_nameIsSet = false;

  m_vipIsSet = false;

  m_vportIsSet = false;

  m_protoIsSet = false;

  m_backendIsSet = false;
}

ServiceJsonObject::~ServiceJsonObject() {}

void ServiceJsonObject::validateKeys() {

  if (!m_vipIsSet) {
    throw std::runtime_error("Variable vip is required");
  }
  if (!m_vportIsSet) {
    throw std::runtime_error("Variable vport is required");
  }
  if (!m_protoIsSet) {
    throw std::runtime_error("Variable proto is required");
  }
}

void ServiceJsonObject::validateMandatoryFields() {

}

void ServiceJsonObject::validateParams() {

  if (m_vipIsSet) {
    std::string patter_value = R"PATTERN((([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])(%[\p{N}\p{L}]+)?)PATTERN";
    std::regex e (patter_value);
    if (!std::regex_match(m_vip, e))
      throw std::runtime_error("Variable vip has not a valid format");
  }
  if (m_vportIsSet) {
    if (m_vport < 0 || m_vport > 65535) {
      throw std::runtime_error("Variable vport is not in the range");
    }
  }
}

nlohmann::json ServiceJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();

  if (m_nameIsSet) {
    val["name"] = m_name;
  }

  if (m_vipIsSet) {
    val["vip"] = m_vip;
  }

  if (m_vportIsSet) {
    val["vport"] = m_vport;
  }

  if (m_protoIsSet) {
    val["proto"] = ServiceProtoEnum_to_string(m_proto);
  }

  {
    nlohmann::json jsonArray;
    for (auto& item : m_backend) {
      jsonArray.push_back(JsonObjectBase::toJson(item));
    }

    if (jsonArray.size() > 0) {
      val["backend"] = jsonArray;
    }
  }

  return val;
}

void ServiceJsonObject::fromJson(nlohmann::json& val) {
  for(nlohmann::json::iterator it = val.begin(); it != val.end(); ++it) {
    std::string key = it.key();
    bool found = (std::find(allowedParameters_.begin(), allowedParameters_.end(), key) != allowedParameters_.end());
    if (!found) {
      throw std::runtime_error(key + " is not a valid parameter");
      return;
    }
  }

  if (val.find("name") != val.end()) {
    setName(val.at("name"));
  }

  if (val.find("vip") != val.end()) {
    setVip(val.at("vip"));
  }

  if (val.find("vport") != val.end()) {
    setVport(val.at("vport"));
  }

  if (val.find("proto") != val.end()) {
    setProto(string_to_ServiceProtoEnum(val.at("proto")));
  }

  m_backend.clear();
  for (auto& item : val["backend"]) {

    ServiceBackendJsonObject newItem;
    newItem.fromJson(item);
    m_backend.push_back(newItem);
    m_backendIsSet = true;
  }

}

nlohmann::json ServiceJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();

  val["vip"]["name"] = "vip";
  val["vip"]["type"] = "key";
  val["vip"]["simpletype"] = "string";
  val["vip"]["description"] = R"POLYCUBE(Virtual IP (vip) of the service where clients connect to)POLYCUBE";
  val["vip"]["example"] = R"POLYCUBE(130.192.100.12)POLYCUBE";
  val["vport"]["name"] = "vport";
  val["vport"]["type"] = "key";
  val["vport"]["simpletype"] = "integer";
  val["vport"]["description"] = R"POLYCUBE(Port of the virtual server where clients connect to (this value is ignored in case of ICMP))POLYCUBE";
  val["vport"]["example"] = R"POLYCUBE(80)POLYCUBE";
  val["proto"]["name"] = "proto";
  val["proto"]["type"] = "key";
  val["proto"]["simpletype"] = "string";
  val["proto"]["description"] = R"POLYCUBE(Upper-layer protocol associated with a loadbalancing service instance.)POLYCUBE";
  val["proto"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json ServiceJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["name"]["name"] = "name";
  val["name"]["type"] = "leaf"; // Suppose that type is leaf
  val["name"]["simpletype"] = "string";
  val["name"]["description"] = R"POLYCUBE(Service name related to the backend server of the pool is connected to)POLYCUBE";
  val["name"]["example"] = R"POLYCUBE(Service-nigx)POLYCUBE";
  val["backend"]["name"] = "backend";
  val["backend"]["type"] = "leaf"; // Suppose that type is leaf
  val["backend"]["type"] = "list";
  val["backend"]["description"] = R"POLYCUBE(Pool of backend servers that actually serve requests)POLYCUBE";
  val["backend"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json ServiceJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();

  val["name"]["name"] = "name";
  val["name"]["simpletype"] = "string";
  val["name"]["description"] = R"POLYCUBE(Service name related to the backend server of the pool is connected to)POLYCUBE";
  val["name"]["example"] = R"POLYCUBE(Service-nigx)POLYCUBE";

  return val;
}

nlohmann::json ServiceJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();

  val["backend"]["name"] = "backend";
  val["backend"]["type"] = "list";
  val["backend"]["description"] = R"POLYCUBE(Pool of backend servers that actually serve requests)POLYCUBE";
  val["backend"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

std::vector<std::string> ServiceJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

std::string ServiceJsonObject::getName() const {
  return m_name;
}

void ServiceJsonObject::setName(std::string value) {
  m_name = value;
  m_nameIsSet = true;
}

bool ServiceJsonObject::nameIsSet() const {
  return m_nameIsSet;
}

void ServiceJsonObject::unsetName() {
  m_nameIsSet = false;
}



std::string ServiceJsonObject::getVip() const {
  return m_vip;
}

void ServiceJsonObject::setVip(std::string value) {
  m_vip = value;
  m_vipIsSet = true;
}

bool ServiceJsonObject::vipIsSet() const {
  return m_vipIsSet;
}

void ServiceJsonObject::unsetVip() {
  m_vipIsSet = false;
}



uint16_t ServiceJsonObject::getVport() const {
  return m_vport;
}

void ServiceJsonObject::setVport(uint16_t value) {
  m_vport = value;
  m_vportIsSet = true;
}

bool ServiceJsonObject::vportIsSet() const {
  return m_vportIsSet;
}

void ServiceJsonObject::unsetVport() {
  m_vportIsSet = false;
}



ServiceProtoEnum ServiceJsonObject::getProto() const {
  return m_proto;
}

void ServiceJsonObject::setProto(ServiceProtoEnum value) {
  m_proto = value;
  m_protoIsSet = true;
}

bool ServiceJsonObject::protoIsSet() const {
  return m_protoIsSet;
}

void ServiceJsonObject::unsetProto() {
  m_protoIsSet = false;
}

std::string ServiceJsonObject::ServiceProtoEnum_to_string(const ServiceProtoEnum &value){
  switch(value){
    case ServiceProtoEnum::TCP:
      return std::string("tcp");
    case ServiceProtoEnum::UDP:
      return std::string("udp");
    default:
      throw std::runtime_error("Bad Service proto");
  }
}

ServiceProtoEnum ServiceJsonObject::string_to_ServiceProtoEnum(const std::string &str){
  if (JsonObjectBase::iequals("tcp", str))
    return ServiceProtoEnum::TCP;
  if (JsonObjectBase::iequals("udp", str))
    return ServiceProtoEnum::UDP;
  throw std::runtime_error("Service proto is invalid");
}


const std::vector<ServiceBackendJsonObject>& ServiceJsonObject::getBackend() const{
  return m_backend;
}

void ServiceJsonObject::addServiceBackend(ServiceBackendJsonObject value) {
  m_backend.push_back(value);
}


bool ServiceJsonObject::backendIsSet() const {
  return m_backendIsSet;
}

void ServiceJsonObject::unsetBackend() {
  m_backendIsSet = false;
}




}
}
}
}

