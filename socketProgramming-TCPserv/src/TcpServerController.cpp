#include "../Header Files/TcpServerController.h"
#include "../Header Files/TcpNewConnectionAcceptor.h"
#include "../Header Files/TcpClientServiceManager.h"
#include "../Header Files/TcpClientDbManager.h"
#include "../Header Files/network_utils.h"

TcpServerController::TcpServerController(std::string ip_a, uint16_t port_n, std::string name1){
    this->ip_addr = network_utils::network_convert_ip_p_to_n(ip_a.c_str());
    this->port_no = port_n;
    this->name = name1;

    this->CAS = new TcpNewConnectionAcceptor(this);
    this->DRS = new TcpClientServiceManager(this);
    this->DBMS = new TcpClientDbManager(this);
}

TcpServerController::~TcpServerController(){
    
}

void TcpServerController::Start(){

}

void TcpServerController::Stop(){

}
