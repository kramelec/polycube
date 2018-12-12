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
* LbrpApiImpl.h
*
*
*/

#pragma once

#include "LbrpApi.h"


#include <memory>
#include <map>
#include <mutex>
#include "../Lbrp.h"

#include "LbrpJsonObject.h"
#include "PortsJsonObject.h"
#include "ServiceJsonObject.h"
#include "ServiceBackendJsonObject.h"
#include "SrcIpRewriteJsonObject.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class LbrpApiImpl : public io::swagger::server::api::LbrpApi {
public:
  LbrpApiImpl();
  ~LbrpApiImpl() { };

  void create_lbrp_by_id(const std::string &name, const LbrpJsonObject &value);
  void create_lbrp_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void create_lbrp_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void create_lbrp_service_backend_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip, const ServiceBackendJsonObject &value);
  void create_lbrp_service_backend_list_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::vector<ServiceBackendJsonObject> &value);
  void create_lbrp_service_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const ServiceJsonObject &value);
  void create_lbrp_service_list_by_id(const std::string &name, const std::vector<ServiceJsonObject> &value);
  void create_lbrp_src_ip_rewrite_by_id(const std::string &name, const SrcIpRewriteJsonObject &value);
  void delete_lbrp_by_id(const std::string &name);
  void delete_lbrp_ports_by_id(const std::string &name, const std::string &portsName);
  void delete_lbrp_ports_list_by_id(const std::string &name);
  void delete_lbrp_service_backend_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip);
  void delete_lbrp_service_backend_list_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto);
  void delete_lbrp_service_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto);
  void delete_lbrp_service_list_by_id(const std::string &name);
  void delete_lbrp_src_ip_rewrite_by_id(const std::string &name);
  LbrpJsonObject read_lbrp_by_id(const std::string &name);
  std::vector<LbrpJsonObject> read_lbrp_list_by_id();
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_lbrp_list_by_id_get_list();
  LbrpLoglevelEnum read_lbrp_loglevel_by_id(const std::string &name);
  PortsJsonObject read_lbrp_ports_by_id(const std::string &name, const std::string &portsName);
  std::vector<PortsJsonObject> read_lbrp_ports_list_by_id(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_lbrp_ports_list_by_id_get_list(const std::string &name);
  std::string read_lbrp_ports_peer_by_id(const std::string &name, const std::string &portsName);
  PortsStatusEnum read_lbrp_ports_status_by_id(const std::string &name, const std::string &portsName);
  PortsTypeEnum read_lbrp_ports_type_by_id(const std::string &name, const std::string &portsName);
  std::string read_lbrp_ports_uuid_by_id(const std::string &name, const std::string &portsName);
  ServiceBackendJsonObject read_lbrp_service_backend_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip);
  std::vector<ServiceBackendJsonObject> read_lbrp_service_backend_list_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_lbrp_service_backend_list_by_id_get_list(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto);
  std::string read_lbrp_service_backend_name_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip);
  uint16_t read_lbrp_service_backend_port_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip);
  uint16_t read_lbrp_service_backend_weight_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip);
  ServiceJsonObject read_lbrp_service_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto);
  std::vector<ServiceJsonObject> read_lbrp_service_list_by_id(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_lbrp_service_list_by_id_get_list(const std::string &name);
  std::string read_lbrp_service_name_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto);
  SrcIpRewriteJsonObject read_lbrp_src_ip_rewrite_by_id(const std::string &name);
  std::string read_lbrp_src_ip_rewrite_ip_range_by_id(const std::string &name);
  std::string read_lbrp_src_ip_rewrite_new_ip_range_by_id(const std::string &name);
  CubeType read_lbrp_type_by_id(const std::string &name);
  std::string read_lbrp_uuid_by_id(const std::string &name);
  void replace_lbrp_by_id(const std::string &name, const LbrpJsonObject &value);
  void replace_lbrp_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void replace_lbrp_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void replace_lbrp_service_backend_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip, const ServiceBackendJsonObject &value);
  void replace_lbrp_service_backend_list_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::vector<ServiceBackendJsonObject> &value);
  void replace_lbrp_service_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const ServiceJsonObject &value);
  void replace_lbrp_service_list_by_id(const std::string &name, const std::vector<ServiceJsonObject> &value);
  void replace_lbrp_src_ip_rewrite_by_id(const std::string &name, const SrcIpRewriteJsonObject &value);
  void update_lbrp_by_id(const std::string &name, const LbrpJsonObject &value);
  void update_lbrp_list_by_id(const std::vector<LbrpJsonObject> &value);
  void update_lbrp_loglevel_by_id(const std::string &name, const LbrpLoglevelEnum &value);
  void update_lbrp_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void update_lbrp_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void update_lbrp_ports_peer_by_id(const std::string &name, const std::string &portsName, const std::string &value);
  void update_lbrp_ports_type_by_id(const std::string &name, const std::string &portsName, const PortsTypeEnum &value);
  void update_lbrp_service_backend_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip, const ServiceBackendJsonObject &value);
  void update_lbrp_service_backend_list_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::vector<ServiceBackendJsonObject> &value);
  void update_lbrp_service_backend_name_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip, const std::string &value);
  void update_lbrp_service_backend_port_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip, const uint16_t &value);
  void update_lbrp_service_backend_weight_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &ip, const uint16_t &value);
  void update_lbrp_service_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const ServiceJsonObject &value);
  void update_lbrp_service_list_by_id(const std::string &name, const std::vector<ServiceJsonObject> &value);
  void update_lbrp_service_name_by_id(const std::string &name, const std::string &vip, const uint16_t &vport, const ServiceProtoEnum &proto, const std::string &value);
  void update_lbrp_src_ip_rewrite_by_id(const std::string &name, const SrcIpRewriteJsonObject &value);
  void update_lbrp_src_ip_rewrite_ip_range_by_id(const std::string &name, const std::string &value);
  void update_lbrp_src_ip_rewrite_new_ip_range_by_id(const std::string &name, const std::string &value);

private:
  std::unordered_map<std::string, std::shared_ptr<Lbrp>> cubes;
  std::shared_ptr<Lbrp> get_cube(const std::string &name);
  std::mutex cubes_mutex;
};

}
}
}
}

