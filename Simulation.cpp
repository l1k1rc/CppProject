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
    Client arrivedC;
    Bank bank;
    Queue queue = bank.getQueue();
    for(int actualTime = 0; actualTime<simulationTime; actualTime++){
        if (actualTime % 5 == 1){
            queue.add(Client(rand()%30+1));
            std::cout << "Long : " << queue.getQueueSize() << std::endl;

        }
    }
    std::cout << bank.getQueue().isEmpty() << std::endl;
}
double Simulation::tempsMoyenArrivees() {}

double Simulation::dureePrevue() {}