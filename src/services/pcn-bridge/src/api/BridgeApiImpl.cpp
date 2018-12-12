/**
* bridge API
* bridge API generated from bridge.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
*/


/* Do not edit this file manually */


#include "BridgeApiImpl.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

BridgeApiImpl::BridgeApiImpl() {}

/*
 * These functions include a default basic implementation.  The user could
 * extend adapt this implementation to his needs.
 */

Bridge &BridgeApiImpl::get_cube(const std::string &name) {
  try {
    return cubes.at(name);
  } catch (std::exception e) {
    std::cout << e.what() << std::endl;
    throw std::runtime_error("Cube " + name + " does not exist");
  }
}

BridgeSchema BridgeApiImpl::create_bridge_by_id(
    const std::string &name, const BridgeSchema &schema) {
  if (cubes.count(name) != 0) {
    throw std::runtime_error("There is already a cube with name " + name);
  }

  BridgeSchema localSchema(schema);
  std::unordered_map<std::string, Bridge>::iterator iter;
  bool inserted;

  if(localSchema.typeIsSet() && !localSchema.getType().empty()) {
    switch(BridgeApiImpl::string_to_type(localSchema.getType())){
      case CubeType::XDP_SKB:
        std::tie(iter, inserted) = cubes.emplace(std::piecewise_construct,
                                               std::forward_as_tuple(name),
                                               std::forward_as_tuple(name, localSchema, CubeType::XDP_SKB));
        break;
      case CubeType::XDP_DRV:
        std::tie(iter, inserted) = cubes.emplace(std::piecewise_construct,
                                               std::forward_as_tuple(name),
                                               std::forward_as_tuple(name, localSchema, CubeType::XDP_DRV));
        break;
      default:
        std::tie(iter, inserted) = cubes.emplace(std::piecewise_construct,
                                               std::forward_as_tuple(name),
                                               std::forward_as_tuple(name, localSchema));
        break;
    }
  } else {
    std::tie(iter, inserted) = cubes.emplace(std::piecewise_construct,
                                               std::forward_as_tuple(name),
                                               std::forward_as_tuple(name, localSchema));
  }

  Bridge &m = iter->second;
  localSchema.setUuid(m.get_uuid().str());
  return localSchema;
}

CubeType BridgeApiImpl::string_to_type(const std::string &type) {
  if(type.compare("XDP_SKB") == 0) {
    return CubeType::XDP_SKB;
  } else if(type.compare("XDP_DRV") == 0) {
    return CubeType::XDP_DRV;
  } else {
    return CubeType::TC;
  }
}

void BridgeApiImpl::delete_bridge_by_id(const std::string &name) {
  if (cubes.count(name) == 0) {
    throw std::runtime_error("Cube " + name + " does not exist");
  }
  cubes.erase(name);
}

std::string BridgeApiImpl::read_bridge_uuid_by_id(
    const std::string &name) {
  Bridge &m = get_cube(name);
  return m.get_uuid().str();
}

std::vector<BridgeSchema> BridgeApiImpl::read_bridge_list_by_id() {
  throw std::runtime_error("Method not implemented");
}

std::vector<std::string> BridgeApiImpl::read_bridge_list_by_id_get_list() {
  std::vector<std::string> modules;
  for (auto &x : cubes) {
    modules.push_back(x.first);
  }
  return modules;
}

/*
 * Ports list related functions
 */
std::vector<PortsSchema> BridgeApiImpl::create_bridge_ports_list_by_id(
    const std::string &name, const std::vector<PortsSchema> &ports) {
  throw std::runtime_error("Method not implemented");
}

std::vector<PortsSchema> BridgeApiImpl::read_bridge_ports_list_by_id(
    const std::string &name) {
  throw std::runtime_error("Method not implemented");
}

void BridgeApiImpl::update_bridge_ports_list_by_id(
    const std::string &name, const std::vector<PortsSchema> &ports) {
  throw std::runtime_error("Method not implemented");
}

void BridgeApiImpl::delete_bridge_ports_list_by_id(
    const std::string &name) {
  throw std::runtime_error("Method not implemented");
}

std::vector<std::string> BridgeApiImpl::read_bridge_ports_list_by_id_get_list() {
    return std::vector<std::string>();
}

/*
 * Ports related functions
 */
PortsSchema BridgeApiImpl::create_bridge_ports_by_id(
    const std::string &name, const std::string &portsName,
    const PortsSchema &ports) {
  Bridge &m = get_cube(name);
  return m.add_port(portsName, ports);
}

PortsSchema BridgeApiImpl::read_bridge_ports_by_id(
    const std::string &name, const std::string &portsName) {
  throw std::runtime_error("Method not implemented");
}

void BridgeApiImpl::update_bridge_ports_by_id(
    const std::string &name, const std::string &portsName,
    const PortsSchema &ports) {
  throw std::runtime_error("Method not implemented");
}

void BridgeApiImpl::delete_bridge_ports_by_id(
    const std::string &name, const std::string &portsName) {
  Bridge &m = get_cube(name);
  m.remove_port(portsName);
}

std::string BridgeApiImpl::read_bridge_ports_peer_by_id(
    const std::string &name, const std::string &portsName) {
  Bridge &m = get_cube(name);
  auto p = m.get_port(portsName);
  return p->peer();
}

std::string BridgeApiImpl::read_bridge_ports_status_by_id(
    const std::string &name, const std::string &portsName) {
  throw std::runtime_error("Method not implemented");
}

std::string BridgeApiImpl::read_bridge_ports_uuid_by_id(
    const std::string &name, const std::string &portsName) {
  Bridge &m = get_cube(name);
  auto p = m.get_port(portsName);
  return p->uuid().str();
}

void BridgeApiImpl::update_bridge_ports_peer_by_id(
    const std::string &name, const std::string &portsName,
    const std::string &peer) {
  Bridge &m = get_cube(name);
  auto p = m.get_port(portsName);
  p->set_peer(peer);
}

void BridgeApiImpl::update_bridge_ports_status_by_id(
    const std::string &name, const std::string &portsName,
    const std::string &status) {
  throw std::runtime_error("Method not implemented");
}


/**
* @brief   Create filteringdatabase by ID
*
* Create operation of resource: filteringdatabase*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address ID of address
* @param[in] filteringdatabase filteringdatabasebody object
*
* Responses:
* FilteringdatabaseSchema
*/
FilteringdatabaseSchema
BridgeApiImpl::create_bridge_filteringdatabase_by_id(const std::string &name, const std::string &vlan, const std::string &address, const FilteringdatabaseSchema &filteringdatabase) {
    auto &m = get_cube(name);
    return m.create_bridge_filteringdatabase_by_id(vlan, address, filteringdatabase);
}

/**
* @brief   Create filteringdatabase by ID
*
* Create operation of resource: filteringdatabase*
*
* @param[in] name ID of name
* @param[in] filteringdatabase filteringdatabasebody object
*
* Responses:
* std::vector<FilteringdatabaseSchema>
*/
std::vector<FilteringdatabaseSchema>
BridgeApiImpl::create_bridge_filteringdatabase_list_by_id(const std::string &name, const std::vector<FilteringdatabaseSchema> &filteringdatabase) {
    auto &m = get_cube(name);
    return m.create_bridge_filteringdatabase_list_by_id(filteringdatabase);
}

/**
* @brief   Create access by ID
*
* Create operation of resource: access*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] access accessbody object
*
* Responses:
* PortsAccessSchema
*/
PortsAccessSchema
BridgeApiImpl::create_bridge_ports_access_by_id(const std::string &name, const std::string &portsName, const PortsAccessSchema &access) {
    auto &m = get_cube(name);
    return m.create_bridge_ports_access_by_id(portsName, access);
}

/**
* @brief   Create stp by ID
*
* Create operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlan ID of vlan
* @param[in] stp stpbody object
*
* Responses:
* PortsStpSchema
*/
PortsStpSchema
BridgeApiImpl::create_bridge_ports_stp_by_id(const std::string &name, const std::string &portsName, const std::string &vlan, const PortsStpSchema &stp) {
    auto &m = get_cube(name);
    return m.create_bridge_ports_stp_by_id(portsName, vlan, stp);
}

/**
* @brief   Create stp by ID
*
* Create operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] stp stpbody object
*
* Responses:
* std::vector<PortsStpSchema>
*/
std::vector<PortsStpSchema>
BridgeApiImpl::create_bridge_ports_stp_list_by_id(const std::string &name, const std::string &portsName, const std::vector<PortsStpSchema> &stp) {
    auto &m = get_cube(name);
    return m.create_bridge_ports_stp_list_by_id(portsName, stp);
}

/**
* @brief   Create allowed by ID
*
* Create operation of resource: allowed*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlanid ID of vlanid
* @param[in] allowed allowedbody object
*
* Responses:
* PortsTrunkAllowedSchema
*/
PortsTrunkAllowedSchema
BridgeApiImpl::create_bridge_ports_trunk_allowed_by_id(const std::string &name, const std::string &portsName, const std::string &vlanid, const PortsTrunkAllowedSchema &allowed) {
    auto &m = get_cube(name);
    return m.create_bridge_ports_trunk_allowed_by_id(portsName, vlanid, allowed);
}

/**
* @brief   Create allowed by ID
*
* Create operation of resource: allowed*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] allowed allowedbody object
*
* Responses:
* std::vector<PortsTrunkAllowedSchema>
*/
std::vector<PortsTrunkAllowedSchema>
BridgeApiImpl::create_bridge_ports_trunk_allowed_list_by_id(const std::string &name, const std::string &portsName, const std::vector<PortsTrunkAllowedSchema> &allowed) {
    auto &m = get_cube(name);
    return m.create_bridge_ports_trunk_allowed_list_by_id(portsName, allowed);
}

/**
* @brief   Create trunk by ID
*
* Create operation of resource: trunk*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] trunk trunkbody object
*
* Responses:
* PortsTrunkSchema
*/
PortsTrunkSchema
BridgeApiImpl::create_bridge_ports_trunk_by_id(const std::string &name, const std::string &portsName, const PortsTrunkSchema &trunk) {
    auto &m = get_cube(name);
    return m.create_bridge_ports_trunk_by_id(portsName, trunk);
}

/**
* @brief   Create stp by ID
*
* Create operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] stp stpbody object
*
* Responses:
* StpSchema
*/
StpSchema
BridgeApiImpl::create_bridge_stp_by_id(const std::string &name, const std::string &vlan, const StpSchema &stp) {
    auto &m = get_cube(name);
    return m.create_bridge_stp_by_id(vlan, stp);
}

/**
* @brief   Create stp by ID
*
* Create operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] stp stpbody object
*
* Responses:
* std::vector<StpSchema>
*/
std::vector<StpSchema>
BridgeApiImpl::create_bridge_stp_list_by_id(const std::string &name, const std::vector<StpSchema> &stp) {
    auto &m = get_cube(name);
    return m.create_bridge_stp_list_by_id(stp);
}

/**
* @brief   Delete filteringdatabase by ID
*
* Delete operation of resource: filteringdatabase*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address ID of address
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_filteringdatabase_by_id(const std::string &name, const std::string &vlan, const std::string &address) {
    auto &m = get_cube(name);
    return m.delete_bridge_filteringdatabase_by_id(vlan, address);
}

/**
* @brief   Delete filteringdatabase by ID
*
* Delete operation of resource: filteringdatabase*
*
* @param[in] name ID of name
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_filteringdatabase_list_by_id(const std::string &name) {
    auto &m = get_cube(name);
    return m.delete_bridge_filteringdatabase_list_by_id();
}

/**
* @brief   Delete access by ID
*
* Delete operation of resource: access*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_ports_access_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.delete_bridge_ports_access_by_id(portsName);
}

/**
* @brief   Delete stp by ID
*
* Delete operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlan ID of vlan
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_ports_stp_by_id(const std::string &name, const std::string &portsName, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.delete_bridge_ports_stp_by_id(portsName, vlan);
}

/**
* @brief   Delete stp by ID
*
* Delete operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_ports_stp_list_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.delete_bridge_ports_stp_list_by_id(portsName);
}

/**
* @brief   Delete allowed by ID
*
* Delete operation of resource: allowed*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlanid ID of vlanid
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_ports_trunk_allowed_by_id(const std::string &name, const std::string &portsName, const std::string &vlanid) {
    auto &m = get_cube(name);
    return m.delete_bridge_ports_trunk_allowed_by_id(portsName, vlanid);
}

/**
* @brief   Delete allowed by ID
*
* Delete operation of resource: allowed*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_ports_trunk_allowed_list_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.delete_bridge_ports_trunk_allowed_list_by_id(portsName);
}

/**
* @brief   Delete trunk by ID
*
* Delete operation of resource: trunk*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_ports_trunk_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.delete_bridge_ports_trunk_by_id(portsName);
}

/**
* @brief   Delete stp by ID
*
* Delete operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_stp_by_id(const std::string &name, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.delete_bridge_stp_by_id(vlan);
}

/**
* @brief   Delete stp by ID
*
* Delete operation of resource: stp*
*
* @param[in] name ID of name
*
* Responses:
*
*/
void
BridgeApiImpl::delete_bridge_stp_list_by_id(const std::string &name) {
    auto &m = get_cube(name);
    return m.delete_bridge_stp_list_by_id();
}

/**
* @brief   Read agingtime by ID
*
* Read operation of resource: agingtime*
*
* @param[in] name ID of name
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_agingtime_by_id(const std::string &name) {
    auto &m = get_cube(name);
    return m.read_bridge_agingtime_by_id();
}

/**
* @brief   Read bridge by ID
*
* Read operation of resource: bridge*
*
* @param[in] name ID of name
*
* Responses:
* BridgeSchema
*/
BridgeSchema
BridgeApiImpl::read_bridge_by_id(const std::string &name) {
    auto &m = get_cube(name);
    return m.read_bridge_by_id();
}

/**
* @brief   Read age by ID
*
* Read operation of resource: age*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address ID of address
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_filteringdatabase_age_by_id(const std::string &name, const std::string &vlan, const std::string &address) {
    auto &m = get_cube(name);
    return m.read_bridge_filteringdatabase_age_by_id(vlan, address);
}

/**
* @brief   Read filteringdatabase by ID
*
* Read operation of resource: filteringdatabase*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address ID of address
*
* Responses:
* FilteringdatabaseSchema
*/
FilteringdatabaseSchema
BridgeApiImpl::read_bridge_filteringdatabase_by_id(const std::string &name, const std::string &vlan, const std::string &address) {
    auto &m = get_cube(name);
    return m.read_bridge_filteringdatabase_by_id(vlan, address);
}

/**
* @brief   Read entrytype by ID
*
* Read operation of resource: entrytype*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address ID of address
*
* Responses:
* std::string
*/
std::string
BridgeApiImpl::read_bridge_filteringdatabase_entrytype_by_id(const std::string &name, const std::string &vlan, const std::string &address) {
    auto &m = get_cube(name);
    return m.read_bridge_filteringdatabase_entrytype_by_id(vlan, address);
}

/**
* @brief   Read filteringdatabase by ID
*
* Read operation of resource: filteringdatabase*
*
* @param[in] name ID of name
*
* Responses:
* std::vector<FilteringdatabaseSchema>
*/
std::vector<FilteringdatabaseSchema>
BridgeApiImpl::read_bridge_filteringdatabase_list_by_id(const std::string &name) {
    auto &m = get_cube(name);
    return m.read_bridge_filteringdatabase_list_by_id();
}

std::vector<std::string> BridgeApiImpl::read_bridge_filteringdatabase_list_by_id_get_list() {
    return std::vector<std::string>();
}
/**
* @brief   Read port by ID
*
* Read operation of resource: port*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address ID of address
*
* Responses:
* std::string
*/
std::string
BridgeApiImpl::read_bridge_filteringdatabase_port_by_id(const std::string &name, const std::string &vlan, const std::string &address) {
    auto &m = get_cube(name);
    return m.read_bridge_filteringdatabase_port_by_id(vlan, address);
}

/**
* @brief   Read access by ID
*
* Read operation of resource: access*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* PortsAccessSchema
*/
PortsAccessSchema
BridgeApiImpl::read_bridge_ports_access_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_access_by_id(portsName);
}

/**
* @brief   Read vlanid by ID
*
* Read operation of resource: vlanid*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_ports_access_vlanid_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_access_vlanid_by_id(portsName);
}

/**
* @brief   Read address by ID
*
* Read operation of resource: address*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* std::string
*/
std::string
BridgeApiImpl::read_bridge_ports_address_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_address_by_id(portsName);
}

/**
* @brief   Read mode by ID
*
* Read operation of resource: mode*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* std::string
*/
std::string
BridgeApiImpl::read_bridge_ports_mode_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_mode_by_id(portsName);
}

/**
* @brief   Read stp by ID
*
* Read operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlan ID of vlan
*
* Responses:
* PortsStpSchema
*/
PortsStpSchema
BridgeApiImpl::read_bridge_ports_stp_by_id(const std::string &name, const std::string &portsName, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_stp_by_id(portsName, vlan);
}

/**
* @brief   Read stp by ID
*
* Read operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* std::vector<PortsStpSchema>
*/
std::vector<PortsStpSchema>
BridgeApiImpl::read_bridge_ports_stp_list_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_stp_list_by_id(portsName);
}

std::vector<std::string> BridgeApiImpl::read_bridge_ports_stp_list_by_id_get_list() {
    return std::vector<std::string>();
}
/**
* @brief   Read pathcost by ID
*
* Read operation of resource: pathcost*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlan ID of vlan
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_ports_stp_pathcost_by_id(const std::string &name, const std::string &portsName, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_stp_pathcost_by_id(portsName, vlan);
}

/**
* @brief   Read portpriority by ID
*
* Read operation of resource: portpriority*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlan ID of vlan
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_ports_stp_portpriority_by_id(const std::string &name, const std::string &portsName, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_stp_portpriority_by_id(portsName, vlan);
}

/**
* @brief   Read state by ID
*
* Read operation of resource: state*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlan ID of vlan
*
* Responses:
* std::string
*/
std::string
BridgeApiImpl::read_bridge_ports_stp_state_by_id(const std::string &name, const std::string &portsName, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_stp_state_by_id(portsName, vlan);
}

/**
* @brief   Read allowed by ID
*
* Read operation of resource: allowed*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlanid ID of vlanid
*
* Responses:
* PortsTrunkAllowedSchema
*/
PortsTrunkAllowedSchema
BridgeApiImpl::read_bridge_ports_trunk_allowed_by_id(const std::string &name, const std::string &portsName, const std::string &vlanid) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_trunk_allowed_by_id(portsName, vlanid);
}

/**
* @brief   Read allowed by ID
*
* Read operation of resource: allowed*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* std::vector<PortsTrunkAllowedSchema>
*/
std::vector<PortsTrunkAllowedSchema>
BridgeApiImpl::read_bridge_ports_trunk_allowed_list_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_trunk_allowed_list_by_id(portsName);
}

std::vector<std::string> BridgeApiImpl::read_bridge_ports_trunk_allowed_list_by_id_get_list() {
    return std::vector<std::string>();
}
/**
* @brief   Read trunk by ID
*
* Read operation of resource: trunk*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* PortsTrunkSchema
*/
PortsTrunkSchema
BridgeApiImpl::read_bridge_ports_trunk_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_trunk_by_id(portsName);
}

/**
* @brief   Read nativevlan by ID
*
* Read operation of resource: nativevlan*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_ports_trunk_nativevlan_by_id(const std::string &name, const std::string &portsName) {
    auto &m = get_cube(name);
    return m.read_bridge_ports_trunk_nativevlan_by_id(portsName);
}

/**
* @brief   Read address by ID
*
* Read operation of resource: address*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
*
* Responses:
* std::string
*/
std::string
BridgeApiImpl::read_bridge_stp_address_by_id(const std::string &name, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_stp_address_by_id(vlan);
}

/**
* @brief   Read stp by ID
*
* Read operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
*
* Responses:
* StpSchema
*/
StpSchema
BridgeApiImpl::read_bridge_stp_by_id(const std::string &name, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_stp_by_id(vlan);
}

/**
* @brief   Read forwarddelay by ID
*
* Read operation of resource: forwarddelay*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_stp_forwarddelay_by_id(const std::string &name, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_stp_forwarddelay_by_id(vlan);
}

/**
* @brief   Read hellotime by ID
*
* Read operation of resource: hellotime*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_stp_hellotime_by_id(const std::string &name, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_stp_hellotime_by_id(vlan);
}

/**
* @brief   Read stp by ID
*
* Read operation of resource: stp*
*
* @param[in] name ID of name
*
* Responses:
* std::vector<StpSchema>
*/
std::vector<StpSchema>
BridgeApiImpl::read_bridge_stp_list_by_id(const std::string &name) {
    auto &m = get_cube(name);
    return m.read_bridge_stp_list_by_id();
}

std::vector<std::string> BridgeApiImpl::read_bridge_stp_list_by_id_get_list() {
    return std::vector<std::string>();
}
/**
* @brief   Read maxmessageage by ID
*
* Read operation of resource: maxmessageage*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_stp_maxmessageage_by_id(const std::string &name, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_stp_maxmessageage_by_id(vlan);
}

/**
* @brief   Read priority by ID
*
* Read operation of resource: priority*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
*
* Responses:
* int32_t
*/
int32_t
BridgeApiImpl::read_bridge_stp_priority_by_id(const std::string &name, const std::string &vlan) {
    auto &m = get_cube(name);
    return m.read_bridge_stp_priority_by_id(vlan);
}

/**
* @brief   Read type by ID
*
* Read operation of resource: type*
*
* @param[in] name ID of name
*
* Responses:
* std::string
*/
std::string
BridgeApiImpl::read_bridge_type_by_id(const std::string &name) {
    auto &m = get_cube(name);
    return m.read_bridge_type_by_id();
}

/**
* @brief   Read stpenabled by ID
*
* Read operation of resource: stpenabled*
*
* @param[in] name ID of name
*
* Responses:
* bool
*/
bool
BridgeApiImpl::read_bridge_stpenabled_by_id(const std::string &name) {
    auto &m = get_cube(name);
    return m.read_bridge_stpenabled_by_id();
}

/**
* @brief   Update agingtime by ID
*
* Update operation of resource: agingtime*
*
* @param[in] name ID of name
* @param[in] agingtime Aging time of the filtering database
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_agingtime_by_id(const std::string &name, const int32_t &agingtime) {
    auto &m = get_cube(name);
    return m.update_bridge_agingtime_by_id(agingtime);
}

/**
* @brief   Update bridge by ID
*
* Update operation of resource: bridge*
*
* @param[in] name ID of name
* @param[in] bridge bridgebody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_by_id(const std::string &name, const BridgeSchema &bridge) {
    auto &m = get_cube(name);
    return m.update_bridge_by_id(bridge);
}

/**
* @brief   Update filteringdatabase by ID
*
* Update operation of resource: filteringdatabase*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address ID of address
* @param[in] filteringdatabase filteringdatabasebody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_filteringdatabase_by_id(const std::string &name, const std::string &vlan, const std::string &address, const FilteringdatabaseSchema &filteringdatabase) {
    auto &m = get_cube(name);
    return m.update_bridge_filteringdatabase_by_id(vlan, address, filteringdatabase);
}

/**
* @brief   Update entrytype by ID
*
* Update operation of resource: entrytype*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address ID of address
* @param[in] entrytype Type of filtering entry
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_filteringdatabase_entrytype_by_id(const std::string &name, const std::string &vlan, const std::string &address, const std::string &entrytype) {
    auto &m = get_cube(name);
    return m.update_bridge_filteringdatabase_entrytype_by_id(vlan, address, entrytype);
}

/**
* @brief   Update filteringdatabase by ID
*
* Update operation of resource: filteringdatabase*
*
* @param[in] name ID of name
* @param[in] filteringdatabase filteringdatabasebody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_filteringdatabase_list_by_id(const std::string &name, const std::vector<FilteringdatabaseSchema> &filteringdatabase) {
    auto &m = get_cube(name);
    return m.update_bridge_filteringdatabase_list_by_id(filteringdatabase);
}

/**
* @brief   Update port by ID
*
* Update operation of resource: port*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address ID of address
* @param[in] port Output port name
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_filteringdatabase_port_by_id(const std::string &name, const std::string &vlan, const std::string &address, const std::string &port) {
    auto &m = get_cube(name);
    return m.update_bridge_filteringdatabase_port_by_id(vlan, address, port);
}

/**
* @brief   Update access by ID
*
* Update operation of resource: access*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] access accessbody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_access_by_id(const std::string &name, const std::string &portsName, const PortsAccessSchema &access) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_access_by_id(portsName, access);
}

/**
* @brief   Update vlanid by ID
*
* Update operation of resource: vlanid*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlanid VLAN associated with this interface
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_access_vlanid_by_id(const std::string &name, const std::string &portsName, const int32_t &vlanid) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_access_vlanid_by_id(portsName, vlanid);
}

/**
* @brief   Update address by ID
*
* Update operation of resource: address*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] address MAC address of the port
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_address_by_id(const std::string &name, const std::string &portsName, const std::string &address) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_address_by_id(portsName, address);
}

/**
* @brief   Update mode by ID
*
* Update operation of resource: mode*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] mode Type of bridge interface: access/trunk
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_mode_by_id(const std::string &name, const std::string &portsName, const std::string &mode) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_mode_by_id(portsName, mode);
}

/**
* @brief   Update stp by ID
*
* Update operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlan ID of vlan
* @param[in] stp stpbody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_stp_by_id(const std::string &name, const std::string &portsName, const std::string &vlan, const PortsStpSchema &stp) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_stp_by_id(portsName, vlan, stp);
}

/**
* @brief   Update stp by ID
*
* Update operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] stp stpbody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_stp_list_by_id(const std::string &name, const std::string &portsName, const std::vector<PortsStpSchema> &stp) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_stp_list_by_id(portsName, stp);
}

/**
* @brief   Update pathcost by ID
*
* Update operation of resource: pathcost*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlan ID of vlan
* @param[in] pathcost STP cost associated with this interface
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_stp_pathcost_by_id(const std::string &name, const std::string &portsName, const std::string &vlan, const int32_t &pathcost) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_stp_pathcost_by_id(portsName, vlan, pathcost);
}

/**
* @brief   Update portpriority by ID
*
* Update operation of resource: portpriority*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlan ID of vlan
* @param[in] portpriority Port priority of this interface
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_stp_portpriority_by_id(const std::string &name, const std::string &portsName, const std::string &vlan, const int32_t &portpriority) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_stp_portpriority_by_id(portsName, vlan, portpriority);
}

/**
* @brief   Update allowed by ID
*
* Update operation of resource: allowed*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] vlanid ID of vlanid
* @param[in] allowed allowedbody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_trunk_allowed_by_id(const std::string &name, const std::string &portsName, const std::string &vlanid, const PortsTrunkAllowedSchema &allowed) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_trunk_allowed_by_id(portsName, vlanid, allowed);
}

/**
* @brief   Update allowed by ID
*
* Update operation of resource: allowed*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] allowed allowedbody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_trunk_allowed_list_by_id(const std::string &name, const std::string &portsName, const std::vector<PortsTrunkAllowedSchema> &allowed) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_trunk_allowed_list_by_id(portsName, allowed);
}

/**
* @brief   Update trunk by ID
*
* Update operation of resource: trunk*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] trunk trunkbody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_trunk_by_id(const std::string &name, const std::string &portsName, const PortsTrunkSchema &trunk) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_trunk_by_id(portsName, trunk);
}

/**
* @brief   Update nativevlan by ID
*
* Update operation of resource: nativevlan*
*
* @param[in] name ID of name
* @param[in] portsName ID of ports_name
* @param[in] nativevlan VLAN that is not tagged in this trunk port
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_ports_trunk_nativevlan_by_id(const std::string &name, const std::string &portsName, const int32_t &nativevlan) {
    auto &m = get_cube(name);
    return m.update_bridge_ports_trunk_nativevlan_by_id(portsName, nativevlan);
}

/**
* @brief   Update address by ID
*
* Update operation of resource: address*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] address Main MAC address used by the STP
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_stp_address_by_id(const std::string &name, const std::string &vlan, const std::string &address) {
    auto &m = get_cube(name);
    return m.update_bridge_stp_address_by_id(vlan, address);
}

/**
* @brief   Update stp by ID
*
* Update operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] stp stpbody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_stp_by_id(const std::string &name, const std::string &vlan, const StpSchema &stp) {
    auto &m = get_cube(name);
    return m.update_bridge_stp_by_id(vlan, stp);
}

/**
* @brief   Update forwarddelay by ID
*
* Update operation of resource: forwarddelay*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] forwarddelay Delay used by STP bridges for port state transition
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_stp_forwarddelay_by_id(const std::string &name, const std::string &vlan, const int32_t &forwarddelay) {
    auto &m = get_cube(name);
    return m.update_bridge_stp_forwarddelay_by_id(vlan, forwarddelay);
}

/**
* @brief   Update hellotime by ID
*
* Update operation of resource: hellotime*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] hellotime Interval between transmissions of BPDU messages
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_stp_hellotime_by_id(const std::string &name, const std::string &vlan, const int32_t &hellotime) {
    auto &m = get_cube(name);
    return m.update_bridge_stp_hellotime_by_id(vlan, hellotime);
}

/**
* @brief   Update stp by ID
*
* Update operation of resource: stp*
*
* @param[in] name ID of name
* @param[in] stp stpbody object
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_stp_list_by_id(const std::string &name, const std::vector<StpSchema> &stp) {
    auto &m = get_cube(name);
    return m.update_bridge_stp_list_by_id(stp);
}

/**
* @brief   Update maxmessageage by ID
*
* Update operation of resource: maxmessageage*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] maxmessageage Maximum age of a BPDU
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_stp_maxmessageage_by_id(const std::string &name, const std::string &vlan, const int32_t &maxmessageage) {
    auto &m = get_cube(name);
    return m.update_bridge_stp_maxmessageage_by_id(vlan, maxmessageage);
}

/**
* @brief   Update priority by ID
*
* Update operation of resource: priority*
*
* @param[in] name ID of name
* @param[in] vlan ID of vlan
* @param[in] priority Bridge priority for STP
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_stp_priority_by_id(const std::string &name, const std::string &vlan, const int32_t &priority) {
    auto &m = get_cube(name);
    return m.update_bridge_stp_priority_by_id(vlan, priority);
}

/**
* @brief   Update stpenabled by ID
*
* Update operation of resource: stpenabled*
*
* @param[in] name ID of name
* @param[in] stpenabled Enable/Disable the STP protocol of the bridge
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_stpenabled_by_id(const std::string &name, const bool &stpenabled) {
    auto &m = get_cube(name);
    return m.update_bridge_stpenabled_by_id(stpenabled);
}

/**
* @brief   Update type by ID
*
* Update operation of resource: type*
*
* @param[in] name ID of name
* @param[in] type Type of the Cube (TC, XDP_SKB, XDP_DRV)
*
* Responses:
*
*/
void
BridgeApiImpl::update_bridge_type_by_id(const std::string &name, const std::string &type) {
    auto &m = get_cube(name);
    return m.update_bridge_type_by_id(type);
}


}
}
}
}

