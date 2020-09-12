//
// Created by l1k1 on 11/09/2020.
//
#include "Simulation.h"

Simulation::Simulation() {

}

Simulation::Simulation(int simulationT, int cashierT) {
    this->simulationTime = simulationT;
    this->cashierCount = cashierT;
    Bank bank =  Bank(cashierT);
}
void Simulation::simulate() {
    for(int actualTime = 0; actualTime<simulationTime; actualTime++){

    }
}
double Simulation::tempsMoyenArrivees() {}

double Simulation::dureePrevue() {}