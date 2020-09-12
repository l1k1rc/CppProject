//
// Created by l1k1 on 11/09/2020.
//
#include "Simulation.h"

Simulation::Simulation() {}

Simulation::Simulation(int simulationT, int cashierT) {
    this->simulationTime = simulationT;
    this->cashierCount = cashierT;
    srand((unsigned int) time(NULL));
}
void Simulation::simulate() {
    /*Client arrivedC;
    for(int actualTime = 0; actualTime<simulationTime; actualTime++){
        if (actualTime % 5 == 1){

            if(bank.isACashierFree()){
                bank.getFreeCashier().servir(arrivedC, rand()%10+1);
            }else
                std::cout << "Test 1" << std::endl;
                bank.getQueue().add(Client(2.09));
        }
    }
    std::cout << bank.getQueue().isEmpty() << std::endl; */
}
double Simulation::tempsMoyenArrivees() {}

double Simulation::dureePrevue() {}