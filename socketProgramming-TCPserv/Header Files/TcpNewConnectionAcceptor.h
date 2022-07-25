#ifndef TCPNEWCONNECTIONACCEPTOR
#define TCPNEWCONNECTIONACCEPTOR

class TcpServerController;

class TcpNewConnectionAcceptor{
    private:
    public:
        TcpServerController *tcp_svctrl;
        TcpNewConnectionAcceptor(TcpServerController *);
        ~TcpNewConnectionAcceptor();
        void startCASthread();
};

#endif