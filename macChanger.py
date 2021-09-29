#!/usr/bin/env python

import subprocess
import optparse
import pyfiglet

result=pyfiglet.figlet_format("macChanger")

print(result)
def get_argument():
    parser = optparse.OptionParser()
    parser.add_option("--interface", dest="interface", help="select interface")
    parser.add_option("--mac", dest="new_mac", help="enter the new mac ")
    (option, arguments) =parser.parse_args()
    if not option.interface:
        #code to handel error
        parser.error("no interface use --help")
    elif not option.new_mac:
        # code to handel error
        parser.error("no mac use --help")
    return option


def change_mac(interface,new_mac):
    print("[+] change interface mac address for " + interface + " to " + new_mac)
    subprocess.call(["ifconfig", interface, "down"])
    subprocess.call(["ifconfig", interface, "hw", "ether", new_mac])
    subprocess.call(["ifconfig", interface, "up"])

option =get_argument()
change_mac(option.interface,option.new_mac)
