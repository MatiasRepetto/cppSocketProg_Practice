#ifndef TCPNEWCONNECTIONACCEPTOR
#define TCPNEWCONNECTIONACCEPTOR

#include <thread>

class TcpServerController;


class TcpNewConnectionAcceptor{
    private:
        int acepptr_verif;
        std::thread* accept_new_con_thread;
    public:
        TcpServerController *tcp_svctrl;
        TcpNewConnectionAcceptor(TcpServerController *);
        ~TcpNewConnectionAcceptor();
        void startCASthread();
};

#endif