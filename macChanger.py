#!/usr/bin/env python

import subprocess

interface=input("interface >")
new_mac=input("new macaddress >")
print("[+] change interface mac address for "+interface+" to "+new_mac)

subprocess.call("ifconfig "+interface+" down",shell=True)
subprocess.call("ifconfig "+interface+" hd ether "+new_mac, shell=True)
subprocess.call("ifconfig "+interface+" up ",shell=True)
