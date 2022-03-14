/*
Packet Capture:
Go to root/tmp/cat and iew the cat files.
*net.cap file is visible.
What is a cat file ? On PCs with the Windows operating system, CAT files are used. 
It belongs to the category of system files and is used to identify a group of files as coming from a reliable and trusted source.
CAT files are most typically used to check files that have been downloaded for software updates.

To view strings that are http urls : strings net.cap|sort -u|grep -i http

pcap lookupnet(3PCAP) is a function that returns one of a device's IPv4 network numbers and related network mask given the device's name 
(the network number is the IPv4 address ANDed with the network mask, so it contains only the network part of the address).

*/

#include <stdio.h>
#include <pcap.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
  char errbuf[PCAP_ERRBUF_SIZE]; 
  bpf_u_int32 mask;   
  bpf_u_int32 ip;    
  struct in_addr ip_addr;
  pcap_lookupnet("eth0", &ip_address, &mask, errbuf);

  ip_addr.s_addr = ip_address;

  printf("IPAddress: %s\n", inet_ntoa(ip_addr));

  return 0;
}

