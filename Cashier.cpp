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

Cashier :: Cashier(){
    srand((unsigned int) time(NULL));
}

double Cashier :: tempsMoyenService(){
    double somme=0;
    int taille = ListTime.size();
    for(std::list<int>::iterator it = ListTime.begin(); it!= ListTime.end(); ++it){
        double item = *it;
        somme += item;
    }
    return somme/taille;
}
// Total number of client served in the simulation
int Cashier ::nbClient() {
    return NbClient;
}
double Cashier ::tauxOccupation() {return NULL;}

bool Cashier ::isFree() {
  return dispo;
}
void Cashier ::servir(Client c,int serviceT) {
    dispo = false;
    ListTime.push_front(serviceT);
    std::cout << "Service du client n°" << c.getArrivaltime() << " avec un temps de service de : " << serviceT << " tours.\n";
    NbClient++;
    this->serviceTime=serviceT;
}
void Cashier ::liberer() {
    std::cout << "Fin du service" << std::endl;
    dispo = true;
    this->serviceTime=0;
}
void Cashier::doService() {
    if(serviceTime>0)
        this->serviceTime--;
    else
        liberer();
}
