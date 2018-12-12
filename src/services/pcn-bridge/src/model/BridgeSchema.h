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

/*
 * BridgeSchema.h
 *
 *
 */

#pragma once


#include "ModelBase.h"

#include "FilteringdatabaseSchema.h"
#include "PortsSchema.h"
#include "StpSchema.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
///
/// </summary>
class  BridgeSchema : public ModelBase {
public:
    BridgeSchema();
    virtual ~BridgeSchema();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    static nlohmann::json getKeys();
    static nlohmann::json getElements();
    static nlohmann::json getWritableLeafs();
    static nlohmann::json getComplexElements();
    /////////////////////////////////////////////
    /// BridgeSchema members

    /// <summary>
    /// Entry associated with the filtering database
    /// </summary>
    std::vector<FilteringdatabaseSchema>& getFilteringdatabase();
    bool filteringdatabaseIsSet() const;
    void unsetFilteringdatabase();

    /// <summary>
    /// Name of the bridge service
    /// </summary>
    std::string getName() const;
    void setName(std::string value);
    bool nameIsSet() const;
    void unsetName();

    /// <summary>
    /// Aging time of the filtering database
    /// </summary>
    int32_t getAgingtime() const;
    void setAgingtime(int32_t value);
    bool agingtimeIsSet() const;
    void unsetAgingtime();

    /// <summary>
    /// Enable/Disable the STP protocol of the bridge
    /// </summary>
    bool getStpenabled() const;
    void setStpenabled(bool value);
    bool stpenabledIsSet() const;
    void unsetStpenabled();

    /// <summary>
    /// Per-vlan Spanning Tree Protocol Configuration
    /// </summary>
    std::vector<StpSchema>& getStp();
    bool stpIsSet() const;
    void unsetStp();

    /// <summary>
    /// Type of the Cube (TC, XDP_SKB, XDP_DRV)
    /// </summary>
    std::string getType() const;
    void setType(std::string value);
    bool typeIsSet() const;
    void unsetType();

    /// <summary>
    /// Entry of the ports table
    /// </summary>
    std::vector<PortsSchema>& getPorts();
    bool portsIsSet() const;
    void unsetPorts();

    /// <summary>
    /// UUID of the Cube
    /// </summary>
    std::string getUuid() const;
    void setUuid(std::string value);
    bool uuidIsSet() const;
    void unsetUuid();

protected:
    std::vector<FilteringdatabaseSchema> m_Filteringdatabase;
    bool m_FilteringdatabaseIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    int32_t m_Agingtime;
    bool m_AgingtimeIsSet;
    bool m_Stpenabled;
    bool m_StpenabledIsSet;
    std::vector<StpSchema> m_Stp;
    bool m_StpIsSet;
    std::string m_Type;
    bool m_TypeIsSet;
    std::vector<PortsSchema> m_Ports;
    bool m_PortsIsSet;
    std::string m_Uuid;
    bool m_UuidIsSet;
};

}
}
}
}

