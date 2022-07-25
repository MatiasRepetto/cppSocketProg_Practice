#ifndef TCPCLIENTDBMANAGER
#define TCPCLIENTDBMANAGER

#include<list>

class TcpClient;
class TcpServerController;

class TcpClientDbManager{
    private:
        std::list<TcpClient*> dblist;
    public:
        TcpServerController *tcp_svctrl;
        TcpClientDbManager(TcpServerController *);
        ~TcpClientDbManager();
        void startDBMSinit();
};

#endif