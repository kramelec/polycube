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
* SimplebridgeApi.h
*
*/

#pragma once

#define POLYCUBE_SERVICE_NAME "simplebridge"


#include <polycube/services/http_router.h>
#include <polycube/services/management_interface.h>
#include <vector>

#include "FdbJsonObject.h"
#include "FdbEntryJsonObject.h"
#include "FdbFlushOutputJsonObject.h"
#include "PortsJsonObject.h"
#include "SimplebridgeJsonObject.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;
using namespace polycube::service;

class  SimplebridgeApi : public ManagementInterface {
 public:
  SimplebridgeApi();
  virtual ~SimplebridgeApi() {};

  const std::string base = "/" + std::string(POLYCUBE_SERVICE_NAME) + "/";

 protected:
  void setup_routes();
  void control_handler(const HttpHandleRequest &request, HttpHandleResponse &response) override;

  void create_simplebridge_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void create_simplebridge_fdb_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void create_simplebridge_fdb_entry_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void create_simplebridge_fdb_entry_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void create_simplebridge_fdb_flush_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void create_simplebridge_ports_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void create_simplebridge_ports_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void delete_simplebridge_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void delete_simplebridge_fdb_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void delete_simplebridge_fdb_entry_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void delete_simplebridge_fdb_entry_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void delete_simplebridge_ports_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void delete_simplebridge_ports_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_fdb_aging_time_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_fdb_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_fdb_entry_age_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_fdb_entry_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_fdb_entry_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_fdb_entry_port_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_loglevel_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_ports_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_ports_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_ports_mac_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_ports_peer_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_ports_status_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_ports_uuid_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_type_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_uuid_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void replace_simplebridge_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void replace_simplebridge_fdb_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void replace_simplebridge_fdb_entry_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void replace_simplebridge_fdb_entry_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void replace_simplebridge_ports_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void replace_simplebridge_ports_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_fdb_aging_time_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_fdb_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_fdb_entry_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_fdb_entry_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_fdb_entry_port_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_loglevel_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_ports_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_ports_list_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void update_simplebridge_ports_peer_by_id_handler(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);

  void read_simplebridge_by_id_help(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_fdb_by_id_help(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_fdb_entry_by_id_help(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_fdb_entry_list_by_id_help(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_list_by_id_help(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_ports_by_id_help(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);
  void read_simplebridge_ports_list_by_id_help(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);

  void create_simplebridge_fdb_flush_by_id_help(const polycube::service::Rest::Request &request, polycube::service::HttpHandleResponse &response);

  polycube::service::Rest::Router router;

  /// <summary>
  /// Create simplebridge by ID
  /// </summary>
  /// <remarks>
  /// Create operation of resource: simplebridge
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">simplebridgebody object</param>
  virtual void create_simplebridge_by_id(const std::string &name, const SimplebridgeJsonObject &value) = 0;
  /// <summary>
  /// Create fdb by ID
  /// </summary>
  /// <remarks>
  /// Create operation of resource: fdb
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">fdbbody object</param>
  virtual void create_simplebridge_fdb_by_id(const std::string &name, const FdbJsonObject &value) = 0;
  /// <summary>
  /// Create entry by ID
  /// </summary>
  /// <remarks>
  /// Create operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="address">ID of address</param>
  /// <param name="value">entrybody object</param>
  virtual void create_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address, const FdbEntryJsonObject &value) = 0;
  /// <summary>
  /// Create entry by ID
  /// </summary>
  /// <remarks>
  /// Create operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">entrybody object</param>
  virtual void create_simplebridge_fdb_entry_list_by_id(const std::string &name, const std::vector<FdbEntryJsonObject> &value) = 0;
  /// <summary>
  /// Create flush by ID
  /// </summary>
  /// <remarks>
  /// Create operation of resource: flush
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual FdbFlushOutputJsonObject create_simplebridge_fdb_flush_by_id(const std::string &name) = 0;
  /// <summary>
  /// Create ports by ID
  /// </summary>
  /// <remarks>
  /// Create operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  /// <param name="value">portsbody object</param>
  virtual void create_simplebridge_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value) = 0;
  /// <summary>
  /// Create ports by ID
  /// </summary>
  /// <remarks>
  /// Create operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">portsbody object</param>
  virtual void create_simplebridge_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value) = 0;
  /// <summary>
  /// Delete simplebridge by ID
  /// </summary>
  /// <remarks>
  /// Delete operation of resource: simplebridge
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual void delete_simplebridge_by_id(const std::string &name) = 0;
  /// <summary>
  /// Delete fdb by ID
  /// </summary>
  /// <remarks>
  /// Delete operation of resource: fdb
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual void delete_simplebridge_fdb_by_id(const std::string &name) = 0;
  /// <summary>
  /// Delete entry by ID
  /// </summary>
  /// <remarks>
  /// Delete operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="address">ID of address</param>
  virtual void delete_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address) = 0;
  /// <summary>
  /// Delete entry by ID
  /// </summary>
  /// <remarks>
  /// Delete operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual void delete_simplebridge_fdb_entry_list_by_id(const std::string &name) = 0;
  /// <summary>
  /// Delete ports by ID
  /// </summary>
  /// <remarks>
  /// Delete operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  virtual void delete_simplebridge_ports_by_id(const std::string &name, const std::string &portsName) = 0;
  /// <summary>
  /// Delete ports by ID
  /// </summary>
  /// <remarks>
  /// Delete operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual void delete_simplebridge_ports_list_by_id(const std::string &name) = 0;
  /// <summary>
  /// Read simplebridge by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: simplebridge
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual SimplebridgeJsonObject read_simplebridge_by_id(const std::string &name) = 0;
  /// <summary>
  /// Read aging-time by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: aging-time
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual uint32_t read_simplebridge_fdb_aging_time_by_id(const std::string &name) = 0;
  /// <summary>
  /// Read fdb by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: fdb
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual FdbJsonObject read_simplebridge_fdb_by_id(const std::string &name) = 0;
  /// <summary>
  /// Read age by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: age
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="address">ID of address</param>
  virtual uint32_t read_simplebridge_fdb_entry_age_by_id(const std::string &name, const std::string &address) = 0;
  /// <summary>
  /// Read entry by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="address">ID of address</param>
  virtual FdbEntryJsonObject read_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address) = 0;
  /// <summary>
  /// Read entry by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual std::vector<FdbEntryJsonObject> read_simplebridge_fdb_entry_list_by_id(const std::string &name) = 0;
  virtual std::vector<nlohmann::fifo_map<std::string, std::string>> read_simplebridge_fdb_entry_list_by_id_get_list(const std::string &name) = 0;
  /// <summary>
  /// Read port by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: port
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="address">ID of address</param>
  virtual std::string read_simplebridge_fdb_entry_port_by_id(const std::string &name, const std::string &address) = 0;
  /// <summary>
  /// Read simplebridge by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: simplebridge
  /// </remarks>
  virtual std::vector<SimplebridgeJsonObject> read_simplebridge_list_by_id() = 0;
  virtual std::vector<nlohmann::fifo_map<std::string, std::string>> read_simplebridge_list_by_id_get_list() = 0;
  /// <summary>
  /// Read loglevel by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: loglevel
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual SimplebridgeLoglevelEnum read_simplebridge_loglevel_by_id(const std::string &name) = 0;
  /// <summary>
  /// Read ports by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  virtual PortsJsonObject read_simplebridge_ports_by_id(const std::string &name, const std::string &portsName) = 0;
  /// <summary>
  /// Read ports by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual std::vector<PortsJsonObject> read_simplebridge_ports_list_by_id(const std::string &name) = 0;
  virtual std::vector<nlohmann::fifo_map<std::string, std::string>> read_simplebridge_ports_list_by_id_get_list(const std::string &name) = 0;
  /// <summary>
  /// Read mac by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: mac
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  virtual std::string read_simplebridge_ports_mac_by_id(const std::string &name, const std::string &portsName) = 0;
  /// <summary>
  /// Read peer by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: peer
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  virtual std::string read_simplebridge_ports_peer_by_id(const std::string &name, const std::string &portsName) = 0;
  /// <summary>
  /// Read status by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: status
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  virtual PortsStatusEnum read_simplebridge_ports_status_by_id(const std::string &name, const std::string &portsName) = 0;
  /// <summary>
  /// Read uuid by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: uuid
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  virtual std::string read_simplebridge_ports_uuid_by_id(const std::string &name, const std::string &portsName) = 0;
  /// <summary>
  /// Read type by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: type
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual CubeType read_simplebridge_type_by_id(const std::string &name) = 0;
  /// <summary>
  /// Read uuid by ID
  /// </summary>
  /// <remarks>
  /// Read operation of resource: uuid
  /// </remarks>
  /// <param name="name">ID of name</param>
  virtual std::string read_simplebridge_uuid_by_id(const std::string &name) = 0;
  /// <summary>
  /// Replace simplebridge by ID
  /// </summary>
  /// <remarks>
  /// Replace operation of resource: simplebridge
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">simplebridgebody object</param>
  virtual void replace_simplebridge_by_id(const std::string &name, const SimplebridgeJsonObject &value) = 0;
  /// <summary>
  /// Replace fdb by ID
  /// </summary>
  /// <remarks>
  /// Replace operation of resource: fdb
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">fdbbody object</param>
  virtual void replace_simplebridge_fdb_by_id(const std::string &name, const FdbJsonObject &value) = 0;
  /// <summary>
  /// Replace entry by ID
  /// </summary>
  /// <remarks>
  /// Replace operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="address">ID of address</param>
  /// <param name="value">entrybody object</param>
  virtual void replace_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address, const FdbEntryJsonObject &value) = 0;
  /// <summary>
  /// Replace entry by ID
  /// </summary>
  /// <remarks>
  /// Replace operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">entrybody object</param>
  virtual void replace_simplebridge_fdb_entry_list_by_id(const std::string &name, const std::vector<FdbEntryJsonObject> &value) = 0;
  /// <summary>
  /// Replace ports by ID
  /// </summary>
  /// <remarks>
  /// Replace operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  /// <param name="value">portsbody object</param>
  virtual void replace_simplebridge_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value) = 0;
  /// <summary>
  /// Replace ports by ID
  /// </summary>
  /// <remarks>
  /// Replace operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">portsbody object</param>
  virtual void replace_simplebridge_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value) = 0;
  /// <summary>
  /// Update simplebridge by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: simplebridge
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">simplebridgebody object</param>
  virtual void update_simplebridge_by_id(const std::string &name, const SimplebridgeJsonObject &value) = 0;
  /// <summary>
  /// Update aging-time by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: aging-time
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">Aging time of the filtering database (in seconds)</param>
  virtual void update_simplebridge_fdb_aging_time_by_id(const std::string &name, const uint32_t &value) = 0;
  /// <summary>
  /// Update fdb by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: fdb
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">fdbbody object</param>
  virtual void update_simplebridge_fdb_by_id(const std::string &name, const FdbJsonObject &value) = 0;
  /// <summary>
  /// Update entry by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="address">ID of address</param>
  /// <param name="value">entrybody object</param>
  virtual void update_simplebridge_fdb_entry_by_id(const std::string &name, const std::string &address, const FdbEntryJsonObject &value) = 0;
  /// <summary>
  /// Update entry by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: entry
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">entrybody object</param>
  virtual void update_simplebridge_fdb_entry_list_by_id(const std::string &name, const std::vector<FdbEntryJsonObject> &value) = 0;
  /// <summary>
  /// Update port by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: port
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="address">ID of address</param>
  /// <param name="value">Output port name</param>
  virtual void update_simplebridge_fdb_entry_port_by_id(const std::string &name, const std::string &address, const std::string &value) = 0;
  /// <summary>
  /// Update simplebridge by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: simplebridge
  /// </remarks>
  /// <param name="value">simplebridgebody object</param>
  virtual void update_simplebridge_list_by_id(const std::vector<SimplebridgeJsonObject> &value) = 0;
  /// <summary>
  /// Update loglevel by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: loglevel
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">Defines the logging level of a service instance, from none (OFF) to the most verbose (TRACE)</param>
  virtual void update_simplebridge_loglevel_by_id(const std::string &name, const SimplebridgeLoglevelEnum &value) = 0;
  /// <summary>
  /// Update ports by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  /// <param name="value">portsbody object</param>
  virtual void update_simplebridge_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value) = 0;
  /// <summary>
  /// Update ports by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: ports
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="value">portsbody object</param>
  virtual void update_simplebridge_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value) = 0;
  /// <summary>
  /// Update peer by ID
  /// </summary>
  /// <remarks>
  /// Update operation of resource: peer
  /// </remarks>
  /// <param name="name">ID of name</param>
  /// <param name="portsName">ID of ports_name</param>
  /// <param name="value">Peer name, such as a network interfaces (e.g., &#39;veth0&#39;) or another cube (e.g., &#39;br1:port2&#39;)</param>
  virtual void update_simplebridge_ports_peer_by_id(const std::string &name, const std::string &portsName, const std::string &value) = 0;
};

}
}
}
}

