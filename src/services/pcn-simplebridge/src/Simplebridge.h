/*
 * Copyright 2018 The Polycube Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#pragma once


#include "../interface/SimplebridgeInterface.h"

#include "polycube/services/cube.h"
#include "polycube/services/port.h"
#include "polycube/services/utils.h"

#include <spdlog/spdlog.h>

#include "Fdb.h"
#include "Ports.h"


using namespace io::swagger::server::model;
using namespace polycube::service;
using polycube::service::CubeType;

enum class SlowPathReason { FLOODING = 1 };

class Simplebridge : public polycube::service::Cube<Ports>, public SimplebridgeInterface {
  friend class Ports;
  friend class Fdb;
  friend class FdbEntry;
public:
  Simplebridge(const std::string name, const SimplebridgeJsonObject &conf,
    CubeType type = CubeType::TC);
  virtual ~Simplebridge();
  std::string generate_code();
  std::vector<std::string> generate_code_vector();
  void packet_in(Ports &port, polycube::service::PacketInMetadata &md, const std::vector<uint8_t> &packet) override;

  void update(const SimplebridgeJsonObject &conf) override;
  SimplebridgeJsonObject toJsonObject() override;

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<Fdb> getFdb() override;
  void addFdb(const FdbJsonObject &value) override;
  void replaceFdb(const FdbJsonObject &conf) override;
  void delFdb() override;

  /// <summary>
  /// UUID of the Cube
  /// </summary>
  std::string getUuid() override;

  /// <summary>
  /// Defines the logging level of a service instance, from none (OFF) to the most verbose (TRACE). Default: OFF
  /// </summary>
  SimplebridgeLoglevelEnum getLoglevel() override;
  void setLoglevel(const SimplebridgeLoglevelEnum &value) override;

  /// <summary>
  /// Type of the Cube (TC, XDP_SKB, XDP_DRV)
  /// </summary>
  CubeType getType() override;

  /// <summary>
  /// Entry of the ports table
  /// </summary>
  std::shared_ptr<Ports> getPorts(const std::string &name) override;
  std::vector<std::shared_ptr<Ports>> getPortsList() override;
  void addPorts(const std::string &name, const PortsJsonObject &conf) override;
  void addPortsList(const std::vector<PortsJsonObject> &conf) override;
  void replacePorts(const std::string &name, const PortsJsonObject &conf) override;
  void delPorts(const std::string &name) override;
  void delPortsList() override;

  /// <summary>
  /// Name of the simplebridge service
  /// </summary>
  std::string getName() override;
  void reloadCodeWithAgingtime(uint32_t value);

private:
  std::unordered_map<std::string, Ports> ports_;
  std::shared_ptr<Fdb> fdb_ = nullptr;

  void flood_packet(Port &port, PacketInMetadata &md, const std::vector<uint8_t> &packet);
  std::mutex ports_mutex_;
};

