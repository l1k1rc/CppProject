//
// Created by l1k1 on 11/09/2020.
//

/*!
 * \file Bank.cpp
 * \brief Classe Bank
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#include <iostream>
#include <utility>
#include "Bank.h"
using namespace std;

Bank::Bank() = default;

Bank::Bank(int cCount, Queue queueT) {
    cout << "Bank constructor used." << endl;
    this->queue = std::move(queueT);
}

Cashier *Bank::getFreeCashier() {
    for(int i=0; i<DIM;i++){
        if(this->cashiers[i].isFree()){
            return &cashiers[i];
        }
    }
}


int Bank::nbCashier() {
    return (sizeof(cashiers)/sizeof(*cashiers));
}

int Bank::nbClients() {
    int servedCl = 0;
    for (Cashier cashier : cashiers){
        if (!cashier.isFree())
            servedCl++;
    }
    return queue.getQueueSize() + servedCl;
}

bool Bank::isACashierFree() {
    for (Cashier cashier : cashiers) {
        if (cashier.isFree()) {
            return true;
        }
    }
    return false;
}
Queue *Bank::getQueue() {
    return &queue;
}

Cashier *Bank::getCashiersArray() {
    return cashiers;
}
bool Bank::allFree() {
    for ( Cashier cashier : cashiers){
        if (!cashier.isFree()){
            return false;
        }
    }
    return true;
}
std::string Bank::toString(){
    cout << "Actual number of cashier in the bank is: " << nbCashier() << endl;
}