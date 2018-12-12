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


#include "../Ddosmitigator.h"




std::string Ddosmitigator::getName(){
  // This method retrieves the name value.
  return Cube::get_name();
}


std::string Ddosmitigator::getUuid(){
  // This method retrieves the uuid value.
  return Cube::get_uuid().str();
}


CubeType Ddosmitigator::getType(){
  // This method retrieves the type value.
  return Cube::get_type();
}


DdosmitigatorLoglevelEnum Ddosmitigator::getLoglevel(){
  // This method retrieves the loglevel value.
    switch(Cube::get_log_level()){
      case polycube::LogLevel::TRACE:
        return DdosmitigatorLoglevelEnum::TRACE;
      case polycube::LogLevel::DEBUG:
        return DdosmitigatorLoglevelEnum::DEBUG;
      case polycube::LogLevel::INFO:
        return DdosmitigatorLoglevelEnum::INFO;
      case polycube::LogLevel::WARN:
        return DdosmitigatorLoglevelEnum::WARN;
      case polycube::LogLevel::ERR:
        return DdosmitigatorLoglevelEnum::ERR;
      case polycube::LogLevel::CRITICAL:
        return DdosmitigatorLoglevelEnum::CRITICAL;
      case polycube::LogLevel::OFF:
        return DdosmitigatorLoglevelEnum::OFF;
    }
}

void Ddosmitigator::setLoglevel(const DdosmitigatorLoglevelEnum &value){
  // This method sets the loglevel value.
    switch(value){
      case DdosmitigatorLoglevelEnum::TRACE:
        Cube::set_log_level(polycube::LogLevel::TRACE);
        break;
      case DdosmitigatorLoglevelEnum::DEBUG:
        Cube::set_log_level(polycube::LogLevel::DEBUG);
        break;
      case DdosmitigatorLoglevelEnum::INFO:
        Cube::set_log_level(polycube::LogLevel::INFO);
        break;
      case DdosmitigatorLoglevelEnum::WARN:
        Cube::set_log_level(polycube::LogLevel::WARN);
        break;
      case DdosmitigatorLoglevelEnum::ERR:
        Cube::set_log_level(polycube::LogLevel::ERR);
        break;
      case DdosmitigatorLoglevelEnum::CRITICAL:
        Cube::set_log_level(polycube::LogLevel::CRITICAL);
        break;
      case DdosmitigatorLoglevelEnum::OFF:
        Cube::set_log_level(polycube::LogLevel::OFF);
        break;
    }
}

std::shared_ptr<Ports> Ddosmitigator::getPorts(const std::string &name){
  return Ports::getEntry(*this, name);
}

std::vector<std::shared_ptr<Ports>> Ddosmitigator::getPortsList(){
  return Ports::get(*this);
}

void Ddosmitigator::addPorts(const std::string &name, const PortsJsonObject &conf){
  Ports::create(*this, name, conf);
}

void Ddosmitigator::addPortsList(const std::vector<PortsJsonObject> &conf){
  for(auto &i : conf){
    std::string name_ = i.getName();
    Ports::create(*this, name_,  i);
  }
}

void Ddosmitigator::replacePorts(const std::string &name, const PortsJsonObject &conf){
  Ports::removeEntry(*this, name);
  std::string name_ = conf.getName();
  Ports::create(*this, name_, conf);

}

void Ddosmitigator::delPorts(const std::string &name){
  Ports::removeEntry(*this, name);
}

void Ddosmitigator::delPortsList(){
  Ports::remove(*this);
}

std::shared_ptr<Stats> Ddosmitigator::getStats(){
  return Stats::getEntry(*this);
}

void Ddosmitigator::addStats(const StatsJsonObject &value){
  Stats::create(*this, value);
}

void Ddosmitigator::replaceStats(const StatsJsonObject &conf){
  Stats::removeEntry(*this);
  Stats::create(*this, conf);
}

void Ddosmitigator::delStats(){
  Stats::removeEntry(*this);
}




std::shared_ptr<BlacklistSrc> Ddosmitigator::getBlacklistSrc(const std::string &ip){
  return BlacklistSrc::getEntry(*this, ip);
}

std::vector<std::shared_ptr<BlacklistSrc>> Ddosmitigator::getBlacklistSrcList(){
  return BlacklistSrc::get(*this);
}

void Ddosmitigator::addBlacklistSrc(const std::string &ip, const BlacklistSrcJsonObject &conf){
  BlacklistSrc::create(*this, ip, conf);
}

void Ddosmitigator::addBlacklistSrcList(const std::vector<BlacklistSrcJsonObject> &conf){
  for(auto &i : conf){
    std::string ip_ = i.getIp();
    BlacklistSrc::create(*this, ip_,  i);
  }
}

void Ddosmitigator::replaceBlacklistSrc(const std::string &ip, const BlacklistSrcJsonObject &conf){
  BlacklistSrc::removeEntry(*this, ip);
  std::string ip_ = conf.getIp();
  BlacklistSrc::create(*this, ip_, conf);

}

void Ddosmitigator::delBlacklistSrc(const std::string &ip){
  BlacklistSrc::removeEntry(*this, ip);
}

void Ddosmitigator::delBlacklistSrcList(){
  BlacklistSrc::remove(*this);
}

std::shared_ptr<BlacklistDst> Ddosmitigator::getBlacklistDst(const std::string &ip){
  return BlacklistDst::getEntry(*this, ip);
}

std::vector<std::shared_ptr<BlacklistDst>> Ddosmitigator::getBlacklistDstList(){
  return BlacklistDst::get(*this);
}

void Ddosmitigator::addBlacklistDst(const std::string &ip, const BlacklistDstJsonObject &conf){
  BlacklistDst::create(*this, ip, conf);
}

void Ddosmitigator::addBlacklistDstList(const std::vector<BlacklistDstJsonObject> &conf){
  for(auto &i : conf){
    std::string ip_ = i.getIp();
    BlacklistDst::create(*this, ip_,  i);
  }
}

void Ddosmitigator::replaceBlacklistDst(const std::string &ip, const BlacklistDstJsonObject &conf){
  BlacklistDst::removeEntry(*this, ip);
  std::string ip_ = conf.getIp();
  BlacklistDst::create(*this, ip_, conf);

}

void Ddosmitigator::delBlacklistDst(const std::string &ip){
  BlacklistDst::removeEntry(*this, ip);
}

void Ddosmitigator::delBlacklistDstList(){
  BlacklistDst::remove(*this);
}



