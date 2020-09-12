//
// Created by l1k1 on 11/09/2020.
//
#include "Simulation.h"

Simulation::Simulation() {

}

Simulation::Simulation(int simulationT, int cashierT) {
    this->simulationTime = simulationT;
    this->cashierCount = cashierT;
    this->bank =  Bank(cashierT);
    srand((unsigned int) time(NULL));
}
void Simulation::simulate() {
    Client thisClient;
    for(int actualTime = 0; actualTime<simulationTime; actualTime++){
        if (actualTime % 5 == 1){
            bank.getQueue().add(Client(rand()%10+1));
            if(bank.getFreeCashier()){

            }

        }
    }
}
double Simulation::tempsMoyenArrivees() {}

double Simulation::dureePrevue() {}