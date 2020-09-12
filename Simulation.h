//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_SIMULATION_H
#define BANKPROJECT_SIMULATION_H
#include "Bank.h"
class Simulation {
public :
    Simulation();
    Simulation(int simulationT, int cashierT);
    double dureePrevue();
    double tempsMoyenArrivees();
    void simulate();

private:
    Bank bank;
    int simulationTime;
    int cashierCount;
};
#endif //BANKPROJECT_SIMULATION_H
