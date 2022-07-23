#ifndef TCPSERVERCONTROLLER
#define TCPSERVERCONTROLLER

#include <string>
#include <stdint.h>

class TcpClientDbManager;
class TcpClientServiceManager;
class TcpNewConnectionAcceptor;

class TcpServerController{
    private:
        TcpClientDbManager *DBMS;
        TcpClientServiceManager *DRS;
        TcpNewConnectionAcceptor *CAS;
    public:
        uint32_t ip_addr;
        uint16_t port_no;
        std::string name;
        TcpServerController(std::string, uint16_t, std::string);
        ~TcpServerController();
        void Start();
        void Stop();
};

#endif