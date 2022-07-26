#ifndef TCPNEWCONNECTIONACCEPTOR
#define TCPNEWCONNECTIONACCEPTOR

#include "Master_Header.h"

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