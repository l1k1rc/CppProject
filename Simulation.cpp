//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Simulation.cpp
 * \brief Classe Simulation
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#include "Simulation.h"
#include "Color.h"
#include <time.h>

Simulation::Simulation() = default;

Simulation::Simulation(int simulationT, int cashierT, int averageS) {
    this->simulationTime = simulationT;
    this->cashierCount = cashierT;
    this->averageService = averageS;
    srand((unsigned int) time(NULL));
    p.init();
}

void Simulation::simulate() {
    int clientNumb = 0;
    for (int actualTime = 0; actualTime <= simulationTime; actualTime++) {
        bank.getQueue()->setQueueSize();
        std::cout << BOLDBLUE << "################ Service time n°" << actualTime << " ################" << RESET
                  << std::endl;
        if (arrival.traiter()) {
            for(int i = 0; i < (rand() % 3) + 1; i++){
                clientNumb++;
                bank.getQueue()->add(Client(actualTime), clientNumb);
            }
        }
        if (!bank.getQueue()->isEmpty() && bank.isACashierFree()) {
            bank.getFreeCashier()->servir(bank.getQueue()->remove(), p.next(averageService)); //p.next(5)
            std::cout << "Treatment of the client. " << std::endl;
        }
        if (!bank.isACashierFree())
            std::cout << BOLDYELLOW << "No cashiers available." << RESET << std::endl;
        updateServices();
        bank.getQueue()->getQueueSize();
    }

    finalize(simulationTime);
    std::cout << BOLDBLUE << "Expected simulation time : " << simulationTime << std::endl;
    statistic();
}

// Allow to upgrade the work of each cashier free. serviceTime-- for each time.
void Simulation::updateServices() {
    for (int i = 0; i < bank.nbCashier(); i++) {
        if (!bank.getCashiersArray()[i].isFree()) {
            bank.getCashiersArray()[i].doService();
        }
    }
}

void Simulation::finalize(int simTime) {
    while (!bank.allFree() && bank.getQueue()->getQueueSize()>0) {
        bank.getQueue()->setQueueSize();
        simTime++;
        std::cout << BOLDBLUE << "################ Bank closing : finalize servicing time n°" << simTime
                  << " ################" << RESET << std::endl;
        if (!bank.getQueue()->isEmpty() && bank.isACashierFree()) {
            bank.getFreeCashier()->servir(bank.getQueue()->remove(), p.next(averageService)); //p.next(5)
            std::cout << "Treatment of the client. " << std::endl;
        }
        if (!bank.isACashierFree())
            std::cout << BOLDYELLOW << "No cashiers available." << RESET << std::endl;
        updateServices();
        bank.getQueue()->getQueueSize();
    }
    std::cout << BOLDBLUE << "Final simulation time : " << simTime-- << RESET << std::endl;
}

void Simulation::statistic() {
    int somme = 0;
    std::cout << BOLDGREEN "##################### Statistics #####################" RESET << std::endl;
    for (int i = 0; i < bank.nbCashier(); i++) {
        somme += bank.getCashiersArray()[i].nbClient();
        std::cout << GREEN << "# Average service time for cashier n°" << i << " : "
                  << bank.getCashiersArray()[i].tempsMoyenService() << RESET << std::endl;
        std::cout << YELLOW << "# Occupation time of cashier n°" << i << " : "
                  << bank.getCashiersArray()[i].tauxOccupation() * 100 << "% busy." << RESET << std::endl;
        std::cout << RED << "# Number of client served by cashier n°" << i << " : "
                  << bank.getCashiersArray()[i].nbClient() << " clients served." << RESET << std::endl;
    }
    std::cout << BOLDYELLOW << "# Average length of queue : " << bank.getQueue()->longAVER() << RESET << std::endl;
    std::cout << BOLDYELLOW << "# Long max of the queue in the simulation : " << bank.getQueue()->longMAX() << RESET
              << std::endl;
    std::cout << BOLDRED << "# Total of clients served in the bank : "
              << somme << " clients served." << RESET << std::endl;
    std::cout << BOLDGREEN << "######################################################" << RESET << std::endl;
}
double Simulation::dureePrevue() {}

