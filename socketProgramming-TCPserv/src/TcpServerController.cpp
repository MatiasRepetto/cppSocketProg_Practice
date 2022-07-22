#include "../Header Files/TcpServerController.h"

TcpServerController::TcpServerController(std::string ip_a, uint16_t port_n, std::string name1){
    ip_addr = atoi(ip_a.c_str());
    port_no = port_n;
    name = name1;
}

TcpServerController::~TcpServerController(){
    
}

void TcpServerController::Start(){

}

void TcpServerController::Stop(){

}
