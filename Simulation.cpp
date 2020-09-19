//
// Created by l1k1 on 11/09/2020.
//
#include "Simulation.h"
#include "Color.h"
#include <time.h>

Simulation::Simulation() {}

Simulation::Simulation(int simulationT, int cashierT) {
    this->simulationTime = simulationT;
    this->cashierCount = cashierT;
    srand((unsigned int) time(NULL));
    p.init();
}

void Simulation::simulate() {
    int clientNumb = 0;
    for (int actualTime = 0; actualTime <= simulationTime; actualTime++) {
        std::cout << BOLDBLUE << "################ Service time n°" << actualTime << " ################" << RESET
                  << std::endl;
        // Arrivée des clients tous les 5 tours
        if (arrival.traiter()) {
            clientNumb++;
            bank.getQueue()->add(Client(actualTime), clientNumb);
        }
        // Si la queue n'est pas vide et si un caissier est disponible -> on prend ce caissier et on sert le client
        if (!bank.getQueue()->isEmpty() && bank.isACashierFree()) {
            bank.getFreeCashier()->servir(bank.getQueue()->remove(), p.next(10)); //p.next(5)
            std::cout << "Treatment of the client. " << std::endl;
        }
        if (!bank.isACashierFree())
            std::cout << BOLDYELLOW << "No cashiers available." << RESET << std::endl;
        updateServices();
        bank.getQueue()->getQueueSize();
    }

    finalize(simulationTime);
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
    while (!bank.allFree()) {
        simTime++;
        std::cout << BOLDBLUE << "################ Bank closing : finalize servicing time n°" << simTime
                  << " ################" << RESET << std::endl;
        if (!bank.getQueue()->isEmpty() && bank.isACashierFree()) {
            bank.getFreeCashier()->servir(bank.getQueue()->remove(), p.next(10)); //p.next(5)
            std::cout << "Treatment of the client. " << std::endl;
        }
        if (!bank.isACashierFree())
            std::cout << BOLDYELLOW << "No cashiers available." << RESET << std::endl;
        updateServices();
        bank.getQueue()->getQueueSize();
    }


}

void Simulation::statistic() {
    std::cout << BOLDGREEN "##################### Statistics #####################" RESET << std::endl;
    for (int i = 0; i < bank.nbCashier(); i++) {
        std::cout << GREEN << "# Average service time for cashier n°" << i << " : "
                  << bank.getCashiersArray()[i].tempsMoyenService() << RESET << std::endl;
        std::cout << YELLOW << "# Occupation time of cashier n°" << i << " : "
                  << bank.getCashiersArray()[i].tauxOccupation() * 100 << "% busy." << RESET << std::endl;
    }
    std::cout << BOLDGREEN << "########################################################" << RESET << std::endl;
}

double Simulation::averageTimeService() {

}

double Simulation::dureePrevue() {}

