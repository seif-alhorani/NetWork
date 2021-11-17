#!/usr/bin/env python

import scapy.all as scapy

def scan(ip):
    arp_request= scapy.ARP(pdst=ip)
    broadcast = scapy.Ether(dst="ff:ff:ff:ff:ff:ff")
    arp_request_brodacast= broadcast/arp_request
    answered_list =scapy.srp(arp_request_brodacast, verbose=False ,timeout=1)[0]
    print("IP\t\t\tMac Address\n---------------------------------------")
    for element in answered_list:
        print(element[1].psrc +"\t\t"+element[1].hwsrc)
        print("---------------------------------------")




scan("0.0.0.0/24")
