//
// Created by l1k1 on 11/09/2020.
//
#include "Simulation.h"
#include <time.h>

Simulation::Simulation() {}

Simulation::Simulation(int simulationT, int cashierT) {
    this->simulationTime = simulationT;
    this->cashierCount = cashierT;
    srand((unsigned int) time(NULL));
    p.init();
}
void Simulation::simulate() {
    //Queue queue = bank.getQueue();
    for(int actualTime = 0; actualTime<simulationTime; actualTime++){
        std::cout << "################ Tour n°" << actualTime << " ################"<<std::endl;
        // Arrivée des clients tous les 5 tours
        if (actualTime % 5 == 1){
            bank.getQueue()->add(Client(actualTime));
            std::cout << "Long : " << bank.getQueue()->getQueueSize() << std::endl;
        }
        // Si la queue n'est pas vide et si un caissier est disponible -> on prend ce caissier et on sert le client
        if(!bank.getQueue()->isEmpty() && bank.isACashierFree()){
            bank.getFreeCashier()->servir(bank.getQueue()->remove(), p.next(5));
            std::cout << "Traitement du client. "<< std::endl;
        }
        if(!bank.isACashierFree())
            std::cout << "Pas de caissier disponible." << std::endl;
        updateServices();
    }
    std::cout << bank.getQueue()->isEmpty() << std::endl;
}
// Allow to upgrade the work of each cashier free. remainingServiceTime-- for each time.
void Simulation::updateServices() {
    for (int i=0; i<bank.nbCashier();i++){
        if(!bank.getCashiersArray()[i].isFree()){
            bank.getCashiersArray()[i].doService();
        }
    }
}

void finalize(){

}
double Simulation::tempsMoyenArrivees() {}

double Simulation::dureePrevue() {}