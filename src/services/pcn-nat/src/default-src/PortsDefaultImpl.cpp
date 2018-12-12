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


// These methods have a default implementation. Your are free to keep it or add your own


#include "../Ports.h"


nlohmann::fifo_map<std::string, std::string>  Ports::getKeys() {
  nlohmann::fifo_map<std::string, std::string>  r;

  r["name"] = getName();

  return r;
}

std::string Ports::getName(){
  // This method retrieves the name value.
  return Port::name();
}


std::string Ports::getUuid(){
  // This method retrieves the uuid value.
  return Port::uuid().str();
}


PortsStatusEnum Ports::getStatus(){
  // This method retrieves the status value.
  switch (Port::get_status()) {
    case polycube::service::PortStatus::UP:
      return PortsStatusEnum::UP;
    case polycube::service::PortStatus::DOWN:
      return PortsStatusEnum::DOWN;
    default:
      return PortsStatusEnum::DOWN;
  }
}


std::string Ports::getPeer(){
  // This method retrieves the peer value.
  return Port::peer();
}

void Ports::setPeer(const std::string &value){
  // This method sets the peer value.
  //logger()->info("Received request to set peer {0}", value);
  Port::set_peer(value);
}
