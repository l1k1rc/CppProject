//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_CASHIER_H
#define BANKPROJECT_CASHIER_H
#include "Client.h"
#include<list>

class Cashier {
private:
public :
    Cashier();
    bool dispo = true;
    double serviceTime;
    int NbClient = 0;
    std::list<double> ListTime;
    Cashier(double averageTimeService);
    double tempsMoyenService();
    int nbClient();
    double tauxOccupation();
    bool estDispo();
    void servir(Client);
    void liberer();
};
#endif //BANKPROJECT_CASHIER_H
