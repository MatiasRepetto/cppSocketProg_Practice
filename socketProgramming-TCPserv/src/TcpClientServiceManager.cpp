#include "../Header Files/TcpClientServiceManager.h"
#include "../Header Files/TcpServerController.h"

TcpClientServiceManager::TcpClientServiceManager(TcpServerController *tcpSC){
    this->tcp_svctrl = tcpSC;
}

TcpClientServiceManager::~TcpClientServiceManager(){

}

void TcpClientServiceManager::startDRSthread(){
    
}