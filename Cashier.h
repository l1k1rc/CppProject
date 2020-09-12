//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_CASHIER_H
#define BANKPROJECT_CASHIER_H
#include "Client.h"
#include<list>

class Cashier {
private:
    int NbClient = 0;
    bool dispo = true;
    double serviceTime;
    std::list<double> ListTime;
public :
    Cashier();
    Cashier(double averageTimeService);
    double tempsMoyenService();
    int nbClient();
    double tauxOccupation();
    bool estDispo();
    void servir(Client);
    void liberer();
};
#endif //BANKPROJECT_CASHIER_H
