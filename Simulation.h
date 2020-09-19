//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_SIMULATION_H
#define BANKPROJECT_SIMULATION_H
#include "Bank.h"
#include "poisson.h"
class Simulation {
public :
    Simulation();
    Simulation(int simulationT, int cashierT);
    double dureePrevue();
    double averageTimeService();
    void simulate();
    void updateServices();
    void finalize();
private:
    Poisson p;
    Bank bank;
    int simulationTime;
    int cashierCount;
};
#endif //BANKPROJECT_SIMULATION_H
