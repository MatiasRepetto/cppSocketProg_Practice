#include "../Header Files/TcpNewConnectionAcceptor.h"
#include "../Header Files/TcpServerController.h"
#include <iostream>
#include <Winsock2.h>
#include <memory.h>


TcpNewConnectionAcceptor::TcpNewConnectionAcceptor(TcpServerController *tcpSC){
    this->tcp_svctrl = tcpSC;
    this->acepptr_verif = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(this->acepptr_verif < 0){
        std::cout << "Error al conectar, codigo: " << this->acepptr_verif; 
    }
    this->accept_new_con_thread = (std::thread*)calloc(1, sizeof(std::thread));
}

TcpNewConnectionAcceptor::~TcpNewConnectionAcceptor(){

}

void TcpNewConnectionAcceptor::startCASthread(){
    
}