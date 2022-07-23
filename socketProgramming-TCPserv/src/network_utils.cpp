#include "../Header Files/network_utils.h"
#include <ws2tcpip.h>

static char *network_convert_ip_n_to_p(uint32_t ip_addr,char *output_buffer){
    char *out = NULL;
    static char str_ip[16];
    out = !output_buffer ? str_ip : output_buffer;
    memset(out, 0, 16);
    ip_addr = htonl(ip_addr);
    inet_ntop(AF_INET, &ip_addr, out, 16);
    out[15] = '\0';
    return out;
}

static uint32_t network_convert_ip_p_to_n(const char *ip_addr){
    uint32_t binary_prefix = 0;
    inet_pton(AF_INET, ip_addr, &binary_prefix);
    binary_prefix = htonl(binary_prefix);
    return binary_prefix;  
}