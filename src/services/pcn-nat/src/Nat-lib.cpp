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


/* Do not edit this file manually */

#include "api/NatApiImpl.h"
#define MANAGER_TYPE io::swagger::server::api::NatApiImpl
#define SERVICE_DESCRIPTION "NAT Service"
#define SERVICE_VERSION "2.0"
#define SERVICE_PYANG_GIT ""
#define SERVICE_SWAGGER_CODEGEN_GIT "polycube/50b9d4f"
#define SERVICE_REQUIRED_KERNEL_VERSION "4.14.0"
const std::string SERVICE_DATA_MODEL = R"POLYCUBE_DM(
module nat {
    yang-version 1.1;
    namespace "http://polycube.network/nat";
    prefix "nat";

    import polycube-base { prefix "basemodel"; }
    import ietf-inet-types { prefix "inet"; }

    organization "Polycube open source project";
    description "YANG data model for the Polycube NAT service";

    extension cli-example {
        argument "value";
        description "A sample value used by the CLI generator";
    }

    basemodel:service-description "NAT Service";
    basemodel:service-version "1.0";
    basemodel:service-name "nat";
    basemodel:service-min-kernel-version "4.14.0";

    uses "basemodel:base-yang-module" {
        augment ports {
            leaf type {
                type enumeration {
                    enum EXTERNAL { description "EXTERNAL interface of the NAT"; }
                    enum INTERNAL { description "INTERNAL interface of the NAT"; }
                }
                mandatory true;
                config false;
                description "Type of the NAT interface (e.g., EXTERNAL or INTERNAL)";
            }

            leaf ip {
                type inet:ipv4-address;
                description "IP address of the port. If the port is EXTERNAL this is the external ip address.";
                nat:cli-example "9.45.21.4";
            }
        }
    }

    grouping snat-rule {
        leaf internal-net {
            type inet:ipv4-prefix;
            mandatory true;
            description "Internal IP address (or subnet)";
            nat:cli-example "10.0.0.0/24 or 10.0.0.1/32";
        }
        leaf external-ip {
            type inet:ipv4-address;
            mandatory true;
            description "Natted source IP address";
            nat:cli-example "8.8.8.8";
        }
    }

    grouping dnat-rule {
        leaf external-ip {
            type inet:ipv4-address;
            mandatory true;
            description "External destination IP address";
            nat:cli-example "8.8.8.8";
        }
        leaf internal-ip {
            type inet:ipv4-address;
            mandatory true;
            description "Internal destination IP address";
            nat:cli-example "10.0.0.1";
        }
    }

    grouping port-forwarding-rule {
        leaf external-ip {
            type inet:ipv4-address;
            mandatory true;
            description "External destination IP address";
            nat:cli-example "8.8.8.8";
        }
        leaf external-port {
            type inet:port-number;
            mandatory true;
            description "External destination L4 port";
        }
        leaf proto {
            type string;
            description "L4 protocol (TCP, UDP, ALL)";
        }
        leaf internal-ip {
            type inet:ipv4-address;
            mandatory true;
            description "Internal destination IP address";
            nat:cli-example "10.0.0.1";
        }
        leaf internal-port {
            type inet:port-number;
            mandatory true;
            description "Internal destination L4 port";
        }
    }

    container rule {
        container snat {
            list entry {
                key "id";
                description "List of Source NAT rules";
                leaf id {
                    type uint32;
                    description "Rule identifier";
                }
                uses nat:snat-rule;
            }
            action append {
                input {
                    uses nat:snat-rule;
                }
                output {
                    leaf id {
                        type uint32;
                    }
                }
            }
        }

        container masquerade {
            leaf enabled {
                type boolean;
            }
            action enable {
                description "Enable masquerade as the default policy";
                output {
                    leaf result {
                        type boolean;
                        description "True if the operation is successful";
                    }
                }
            }
            action disable {
                description "Disable masquerade as the default policy";
                output {
                    leaf result {
                        type boolean;
                        description "True if the operation is successful";
                    }
                }
            }
        }

        container dnat {
            list entry {
                key "id";
                description "List of Destination NAT rules";
                leaf id {
                    type uint32;
                    description "Rule identifier";
                }
                uses nat:dnat-rule;
            }
            action append {
                input {
                    uses nat:dnat-rule;
                }
                output {
                    leaf id {
                        type uint32;
                    }
                }
            }
        }

        container port-forwarding {
            list entry {
                key "id";
                description "List of port forwarding rules";
                leaf id {
                    type uint32;
                    description "Rule identifier";
                }
                uses nat:port-forwarding-rule;
            }
            action append {
                input {
                    uses nat:port-forwarding-rule;
                }
                output {
                    leaf id {
                        type uint32;
                    }
                }
            }
        }
    }

    list natting-table {
        key "internal-src internal-dst internal-sport internal-dport proto";

        leaf internal-src {
            type inet:ipv4-address;
            description "Source IP address";
        }
        leaf internal-dst {
            type inet:ipv4-address;
            description "Destination IP address";
        }
        leaf internal-sport {
            type inet:port-number;
            description "Source L4 port number";
        }
        leaf internal-dport {
            type inet:port-number;
            description "Destination L4 port number";
        }
        leaf proto {
            type string;
            description "L4 protocol";
        }
        leaf originating-rule {
            type enumeration {
                enum snat;
                enum dnat;
                enum masquerade;
                enum portforwarding;
            }
            description "The set of rules that created this mapping";
        }
        leaf external-ip {
            type inet:ipv4-address;
            description "Translated IP address";
        }
        leaf external-port {
            type inet:port-number;
            description "Translated L4 port number";
        }
    }
}

)POLYCUBE_DM";
#include <polycube/services/shared_library.h>
