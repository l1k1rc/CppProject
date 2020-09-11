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
    int nbCashier();
    int nbClients();
    Cashier getFreeCashier();

private:
    Cashier cashier[4];
    Queue queue;
};
#endif //BANKPROJECT_BANK_H
