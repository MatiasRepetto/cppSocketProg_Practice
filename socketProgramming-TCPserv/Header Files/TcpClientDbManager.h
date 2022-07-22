#ifndef TCPCLIENTDBMANAGER
#define TCPCLIENTDBMANAGER

#include<list>

class TcpClient;
class TcpServerController;

class TcpClientDbManager{
    private:
        std::list<TcpClient*> dblist;
    public:
        TcpServerController* tcpController;
        TcpClientDbManager();
        ~TcpClientDbManager();
};

#endif