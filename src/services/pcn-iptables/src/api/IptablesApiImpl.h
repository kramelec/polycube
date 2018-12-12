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
* IptablesApiImpl.h
*
*
*/

#pragma once

#include "IptablesApi.h"


#include <memory>
#include <map>
#include <mutex>
#include "../Iptables.h"

#include "ChainJsonObject.h"
#include "ChainAppendInputJsonObject.h"
#include "ChainAppendOutputJsonObject.h"
#include "ChainApplyRulesOutputJsonObject.h"
#include "ChainDeleteInputJsonObject.h"
#include "ChainInsertInputJsonObject.h"
#include "ChainInsertOutputJsonObject.h"
#include "ChainResetCountersOutputJsonObject.h"
#include "ChainRuleJsonObject.h"
#include "ChainStatsJsonObject.h"
#include "IptablesJsonObject.h"
#include "PortsJsonObject.h"
#include "SessionTableJsonObject.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class IptablesApiImpl : public io::swagger::server::api::IptablesApi {
public:
  IptablesApiImpl();
  ~IptablesApiImpl() { };

  void create_iptables_by_id(const std::string &name, const IptablesJsonObject &value);
  ChainAppendOutputJsonObject create_iptables_chain_append_by_id(const std::string &name, const ChainNameEnum &chainName, const ChainAppendInputJsonObject &value);
  ChainApplyRulesOutputJsonObject create_iptables_chain_apply_rules_by_id(const std::string &name, const ChainNameEnum &chainName);
  void create_iptables_chain_by_id(const std::string &name, const ChainNameEnum &chainName, const ChainJsonObject &value);
  void create_iptables_chain_delete_by_id(const std::string &name, const ChainNameEnum &chainName, const ChainDeleteInputJsonObject &value);
  ChainInsertOutputJsonObject create_iptables_chain_insert_by_id(const std::string &name, const ChainNameEnum &chainName, const ChainInsertInputJsonObject &value);
  void create_iptables_chain_list_by_id(const std::string &name, const std::vector<ChainJsonObject> &value);
  ChainResetCountersOutputJsonObject create_iptables_chain_reset_counters_by_id(const std::string &name, const ChainNameEnum &chainName);
  void create_iptables_chain_rule_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const ChainRuleJsonObject &value);
  void create_iptables_chain_rule_list_by_id(const std::string &name, const ChainNameEnum &chainName, const std::vector<ChainRuleJsonObject> &value);
  void create_iptables_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void create_iptables_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void delete_iptables_by_id(const std::string &name);
  void delete_iptables_chain_by_id(const std::string &name, const ChainNameEnum &chainName);
  void delete_iptables_chain_list_by_id(const std::string &name);
  void delete_iptables_chain_rule_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  void delete_iptables_chain_rule_list_by_id(const std::string &name, const ChainNameEnum &chainName);
  void delete_iptables_ports_by_id(const std::string &name, const std::string &portsName);
  void delete_iptables_ports_list_by_id(const std::string &name);
  IptablesJsonObject read_iptables_by_id(const std::string &name);
  ChainJsonObject read_iptables_chain_by_id(const std::string &name, const ChainNameEnum &chainName);
  ActionEnum read_iptables_chain_default_by_id(const std::string &name, const ChainNameEnum &chainName);
  std::vector<ChainJsonObject> read_iptables_chain_list_by_id(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_iptables_chain_list_by_id_get_list(const std::string &name);
  ActionEnum read_iptables_chain_rule_action_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  ChainRuleJsonObject read_iptables_chain_rule_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  ConntrackstatusEnum read_iptables_chain_rule_conntrack_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  uint16_t read_iptables_chain_rule_dport_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  std::string read_iptables_chain_rule_dst_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  std::string read_iptables_chain_rule_in_iface_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  std::string read_iptables_chain_rule_l4proto_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  std::vector<ChainRuleJsonObject> read_iptables_chain_rule_list_by_id(const std::string &name, const ChainNameEnum &chainName);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_iptables_chain_rule_list_by_id_get_list(const std::string &name, const ChainNameEnum &chainName);
  std::string read_iptables_chain_rule_out_iface_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  uint16_t read_iptables_chain_rule_sport_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  std::string read_iptables_chain_rule_src_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  std::string read_iptables_chain_rule_tcpflags_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  ChainStatsJsonObject read_iptables_chain_stats_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  uint64_t read_iptables_chain_stats_bytes_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  std::vector<ChainStatsJsonObject> read_iptables_chain_stats_list_by_id(const std::string &name, const ChainNameEnum &chainName);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_iptables_chain_stats_list_by_id_get_list(const std::string &name, const ChainNameEnum &chainName);
  uint64_t read_iptables_chain_stats_pkts_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id);
  IptablesConntrackEnum read_iptables_conntrack_by_id(const std::string &name);
  IptablesHorusEnum read_iptables_horus_by_id(const std::string &name);
  bool read_iptables_interactive_by_id(const std::string &name);
  std::vector<IptablesJsonObject> read_iptables_list_by_id();
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_iptables_list_by_id_get_list();
  IptablesLoglevelEnum read_iptables_loglevel_by_id(const std::string &name);
  PortsJsonObject read_iptables_ports_by_id(const std::string &name, const std::string &portsName);
  std::vector<PortsJsonObject> read_iptables_ports_list_by_id(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_iptables_ports_list_by_id_get_list(const std::string &name);
  std::string read_iptables_ports_peer_by_id(const std::string &name, const std::string &portsName);
  PortsStatusEnum read_iptables_ports_status_by_id(const std::string &name, const std::string &portsName);
  std::string read_iptables_ports_uuid_by_id(const std::string &name, const std::string &portsName);
  SessionTableJsonObject read_iptables_session_table_by_id(const std::string &name, const std::string &src, const std::string &dst, const std::string &l4proto, const uint16_t &sport, const uint16_t &dport);
  std::vector<SessionTableJsonObject> read_iptables_session_table_list_by_id(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_iptables_session_table_list_by_id_get_list(const std::string &name);
  std::string read_iptables_session_table_state_by_id(const std::string &name, const std::string &src, const std::string &dst, const std::string &l4proto, const uint16_t &sport, const uint16_t &dport);
  CubeType read_iptables_type_by_id(const std::string &name);
  std::string read_iptables_uuid_by_id(const std::string &name);
  void replace_iptables_by_id(const std::string &name, const IptablesJsonObject &value);
  void replace_iptables_chain_by_id(const std::string &name, const ChainNameEnum &chainName, const ChainJsonObject &value);
  void replace_iptables_chain_list_by_id(const std::string &name, const std::vector<ChainJsonObject> &value);
  void replace_iptables_chain_rule_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const ChainRuleJsonObject &value);
  void replace_iptables_chain_rule_list_by_id(const std::string &name, const ChainNameEnum &chainName, const std::vector<ChainRuleJsonObject> &value);
  void replace_iptables_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void replace_iptables_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void update_iptables_by_id(const std::string &name, const IptablesJsonObject &value);
  void update_iptables_chain_by_id(const std::string &name, const ChainNameEnum &chainName, const ChainJsonObject &value);
  void update_iptables_chain_default_by_id(const std::string &name, const ChainNameEnum &chainName, const ActionEnum &value);
  void update_iptables_chain_list_by_id(const std::string &name, const std::vector<ChainJsonObject> &value);
  void update_iptables_chain_rule_action_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const ActionEnum &value);
  void update_iptables_chain_rule_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const ChainRuleJsonObject &value);
  void update_iptables_chain_rule_conntrack_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const ConntrackstatusEnum &value);
  void update_iptables_chain_rule_dport_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const uint16_t &value);
  void update_iptables_chain_rule_dst_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const std::string &value);
  void update_iptables_chain_rule_in_iface_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const std::string &value);
  void update_iptables_chain_rule_l4proto_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const std::string &value);
  void update_iptables_chain_rule_list_by_id(const std::string &name, const ChainNameEnum &chainName, const std::vector<ChainRuleJsonObject> &value);
  void update_iptables_chain_rule_out_iface_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const std::string &value);
  void update_iptables_chain_rule_sport_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const uint16_t &value);
  void update_iptables_chain_rule_src_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const std::string &value);
  void update_iptables_chain_rule_tcpflags_by_id(const std::string &name, const ChainNameEnum &chainName, const uint32_t &id, const std::string &value);
  void update_iptables_conntrack_by_id(const std::string &name, const IptablesConntrackEnum &value);
  void update_iptables_horus_by_id(const std::string &name, const IptablesHorusEnum &value);
  void update_iptables_interactive_by_id(const std::string &name, const bool &value);
  void update_iptables_list_by_id(const std::vector<IptablesJsonObject> &value);
  void update_iptables_loglevel_by_id(const std::string &name, const IptablesLoglevelEnum &value);
  void update_iptables_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void update_iptables_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void update_iptables_ports_peer_by_id(const std::string &name, const std::string &portsName, const std::string &value);

private:
  std::unordered_map<std::string, std::shared_ptr<Iptables>> cubes;
  std::shared_ptr<Iptables> get_cube(const std::string &name);
  std::mutex cubes_mutex;
};

}
}
}
}

