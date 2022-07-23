#ifndef NETWORK_UTILS
#define NETWORK_UTILS

#include<stdint.h>

class network_utils{
    private:
    public:
        static char *network_convert_ip_n_to_p(uint32_t ip_addr,char *output_buffer);
        static uint32_t network_convert_ip_p_to_n(const char *ip_addr);
};

#endif