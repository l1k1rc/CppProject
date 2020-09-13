//
// Created by l1k1 on 11/09/2020.
//
#include <iostream>
#include "Bank.h"
#include "Cashier.h"
#include "Queue.h"
using namespace std;

Bank::Bank() {}

Bank::Bank(int cCount, Queue queueT) {
    cout << "Bank constructor used." << endl;
    this->queue = queueT;
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
Queue Bank::getQueue() {
    return queue;
}

Cashier *Bank::getCashiersArray() {
    return cashiers;
}
std::string Bank::toString(){
    cout << "Actual number of cashier in the bank is: " << nbCashier() << endl;
}