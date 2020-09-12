//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_BANK_H
#define BANKPROJECT_BANK_H
#include "Cashier.h"
#include "Queue.h"
class Bank
{
public :
    Bank();
    Bank(int cCount, Queue queueT);
    int nbCashier();
    int nbClients();
    Cashier getFreeCashier();
    Queue getQueue();
    std::string toString();
    bool isACashierFree();
private:
    Cashier cashiers[4];
    Queue queue;
};
#endif //BANKPROJECT_BANK_H
