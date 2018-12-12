/**
* router API
* Router Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


// These methods have a default implementation. Your are free to keep it or add your own


#include "../Route.h"


nlohmann::fifo_map<std::string, std::string>  Route::getKeys() {
  nlohmann::fifo_map<std::string, std::string>  r;

  r["network"] = getNetwork();

  r["netmask"] = getNetmask();

  r["nexthop"] = getNexthop();

  return r;
}









