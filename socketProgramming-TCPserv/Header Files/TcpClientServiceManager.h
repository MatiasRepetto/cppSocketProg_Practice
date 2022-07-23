#ifndef TCPCLIENTSERVICEMANAGER
#define TCPCLIENTSERVICEMANAGER


class TcpServerController;

class TcpClientServiceManager{
    private:
    public:
        TcpServerController *tcp_svctrl;
        TcpClientServiceManager(TcpServerController *);
        ~TcpClientServiceManager();

};

#endif