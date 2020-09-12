//
// Created by l1k1 on 11/09/2020.
//
#include <iostream>
#include "Bank.h"
#include "Cashier.h"
#include "Queue.h"
using namespace std;

Bank::Bank() {}

Bank::Bank(int cCount) {}

Cashier Bank::getFreeCashier() {
    for (Cashier cashier : cashiers) {
        if (cashier.estDispo()) {
            return cashier;
        }
    }
    return NULL;
}


int Bank::nbCashier() {
    return (sizeof(cashiers)/sizeof(*cashiers));
}

int Bank::nbClients() {
    int servedCl = 0;
    for (Cashier cashier : cashiers){
        if (!cashier.estDispo())
            servedCl++;
    }
    return queue.getQueueSize() + servedCl;
}

std::string Bank::toString(){
    cout << "Actual number of cashier in the bank is: " << nbCashier() << endl;
}