/**
* ddosmitigator API
* DDoS Mitigator Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


// These methods have a default implementation. Your are free to keep it or add your own


#include "../BlacklistSrc.h"


nlohmann::fifo_map<std::string, std::string>  BlacklistSrc::getKeys() {
  nlohmann::fifo_map<std::string, std::string>  r;

  r["ip"] = getIp();

  return r;
}






