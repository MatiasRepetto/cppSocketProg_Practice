#include "../Header Files/TcpNewConnectionAcceptor.h"
#include "../Header Files/TcpServerController.h"

TcpNewConnectionAcceptor::TcpNewConnectionAcceptor(TcpServerController *tcpSC){
    this->tcp_svctrl = tcpSC;
}

TcpNewConnectionAcceptor::~TcpNewConnectionAcceptor(){

}

void TcpNewConnectionAcceptor::startCASthread(){
    
}