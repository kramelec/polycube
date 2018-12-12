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


#include "../RuleSnat.h"



std::shared_ptr<RuleSnatEntry> RuleSnat::getEntry(const uint32_t &id){
  return RuleSnatEntry::getEntry(*this, id);
}

std::vector<std::shared_ptr<RuleSnatEntry>> RuleSnat::getEntryList(){
  return RuleSnatEntry::get(*this);
}

void RuleSnat::addEntry(const uint32_t &id, const RuleSnatEntryJsonObject &conf){
  RuleSnatEntry::create(*this, id, conf);
}

void RuleSnat::addEntryList(const std::vector<RuleSnatEntryJsonObject> &conf){
  for(auto &i : conf){
    uint32_t id_ = i.getId();
    RuleSnatEntry::create(*this, id_,  i);
  }
}

void RuleSnat::replaceEntry(const uint32_t &id, const RuleSnatEntryJsonObject &conf){
  RuleSnatEntry::removeEntry(*this, id);
  uint32_t id_ = conf.getId();
  RuleSnatEntry::create(*this, id_, conf);

}

void RuleSnat::delEntry(const uint32_t &id){
  RuleSnatEntry::removeEntry(*this, id);
}

void RuleSnat::delEntryList(){
  RuleSnatEntry::remove(*this);
}



