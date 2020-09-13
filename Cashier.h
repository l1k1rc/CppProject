//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_CASHIER_H
#define BANKPROJECT_CASHIER_H
#include "Client.h"
#include<list>

class Cashier : public std::error_code {
public:
    int NbClient = 0;
    bool dispo = true;
    int serviceTime;
    std::list<int> ListTime;
public :
    Cashier();
    void doService();
    double tempsMoyenService();
    int nbClient();
    double tauxOccupation();
    bool isFree();
    void servir(Client, int serviceT);
    void liberer();
};
#endif //BANKPROJECT_CASHIER_H
