#include "../Header Files/TcpClientDbManager.h"
#include "../Header Files/TcpServerController.h"

TcpClientDbManager::TcpClientDbManager(TcpServerController *tcpSC){
    this->tcp_svctrl = tcpSC;
}

TcpClientDbManager::~TcpClientDbManager(){

}