#!/usr/bin/env bash

#         TOPOLOGY
#
#                              +-----------+                 +-----------+
#      veth1 (10.0.1.1)--------|     r1    |-----------------|    nat1   |------- veth2 (10.0.2.1)
#                            ^ +-----------+  ^            ^ +-----------+  ^
#                            |                |            |                |
#                          to_veth1        to_nat1  to_r1 (INTERNAL)    to_veth2 (EXTERNAL)
#

# TEST 3
# test ping with destination nat

source "${BASH_SOURCE%/*}/helpers.bash"

function cleanup {
    set +e
    delete_veth 2
    polycubectl nat del nat1
    polycubectl router del r1
}
trap cleanup EXIT

veth1_ip=10.0.1.1
veth2_ip=10.0.2.1
to_nat_ip=10.0.2.254
to_veth1_ip=10.0.1.254
missing_ip=10.0.3.1

set -x
set -e

create_veth_net 2

polycubectl nat add nat1
polycubectl router add r1

polycubectl router r1 ports add to_veth1 ip=$to_veth1_ip netmask=255.255.255.0
polycubectl router r1 ports to_veth1 set peer=veth1
polycubectl router r1 ports add to_nat1 ip=$to_nat_ip netmask=255.255.255.0

polycubectl nat1 ports add to_r1 type=INTERNAL
polycubectl connect nat1:to_r1 r1:to_nat1

polycubectl nat1 ports add to_veth2 type=EXTERNAL ip=$to_nat_ip
polycubectl connect nat1:to_veth2 veth2

test_fail sudo ip netns exec ns2 ping $missing_ip -c 3

polycubectl nat1 rule dnat append external-ip=$missing_ip internal-ip=$veth1_ip

sudo ip netns exec ns2 ping $missing_ip -c 3
