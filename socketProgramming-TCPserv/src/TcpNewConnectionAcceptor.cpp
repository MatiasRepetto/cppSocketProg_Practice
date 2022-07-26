#include "../Header Files/TcpNewConnectionAcceptor.h"
#include "../Header Files/TcpServerController.h"
#include "../Header Files/Master_Header.h"


TcpNewConnectionAcceptor::TcpNewConnectionAcceptor(TcpServerController *tcpSC){
    this->tcp_svctrl = tcpSC;
    this->acepptr_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); //file descriptor
    if(this->acepptr_fd < 0){
        std::cout << "Error al conectar, codigo: " << this->acepptr_fd; 
    }
    this->accept_new_con_thread = (std::thread*)calloc(1, sizeof(std::thread));
}

TcpNewConnectionAcceptor::~TcpNewConnectionAcceptor(){

}

void TcpNewConnectionAcceptor::startCASthread(){
    
}