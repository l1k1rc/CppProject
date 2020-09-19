//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Cashier.cpp
 * \brief Classe Cashier
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#include "Cashier.h"
#include <ctime>
#include <cstdlib>
#include <list>
#include <iostream>
#include "Color.h"

Cashier::Cashier() {
    srand((unsigned int) time(NULL));
}

double Cashier::tempsMoyenService() {
    double somme = 0;
    int taille = ListTime.size();
    for (std::list<int>::iterator it = ListTime.begin(); it != ListTime.end(); ++it) {
        double item = *it;
        somme += item;
    }
    return somme / taille;
}

// Total number of client served in the simulation
int Cashier::nbClient() {
    return NbClient;
}

double Cashier::tauxOccupation() {
    double count = 0;
    int taille = ListDisp.size();
    for (std::list<int>::iterator it = ListDisp.begin(); it != ListDisp.end(); ++it) {
        double item = *it;
        if(item==0)
            count++;
    }
    return count / taille;
}

bool Cashier::isFree() {
    return dispo;
}

void Cashier::servir(Client c, int serviceT) {
    dispo = false;
    ListDisp.push_front(dispo);
    ListTime.push_front(serviceT);
    std::cout << "Service du client n°" << c.getArrivaltime() << " avec un temps de service de : " << serviceT
              << " tours.\n";
    NbClient++;
    this->serviceTime = serviceT;
}

void Cashier::liberer() {
    std::cout << BOLDCYAN << "####### End of service #######\n" << RESET;
    dispo = true;
    ListDisp.push_front(dispo);
    this->serviceTime = 0;
}

void Cashier::doService() {
    if (this->serviceTime > 0) {
        ListDisp.push_front(dispo);
        std::cout << "Service time decr : " << this->serviceTime << std::endl;
        this->serviceTime--;
    } else {
        this->liberer();
    }
}
