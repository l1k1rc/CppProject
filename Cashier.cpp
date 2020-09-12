//
// Created by l1k1 on 11/09/2020.
//
#include "Cashier.h"
#include <ctime>
#include <cstdlib>
#include <list>
#include <iostream>

Cashier :: Cashier(){
    srand((unsigned int) time(NULL));
}
Cashier::Cashier(double averageTimeService) {

}
double Cashier :: tempsMoyenService(){
    double somme=0;
    int taille = ListTime.size();
    for(std::list<double>::iterator it = ListTime.begin(); it!= ListTime.end(); ++it){
        double item = *it;
        somme += item;
    }
    return somme/taille;
}

int Cashier ::nbClient() {
    return NbClient;
}
double Cashier ::tauxOccupation() {

}
bool Cashier ::estDispo() {
  return dispo;
}
void Cashier ::servir(Client) {
    ListTime.push_front(rand()%10+1);
    dispo = false;
    NbClient++;
}
void Cashier ::liberer() {
    dispo = true;
}
