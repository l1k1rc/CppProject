//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_QUEUE_H
#define BANKPROJECT_QUEUE_H
#include "Client.h"

class Queue : public Client{

public :
    Queue();
    int longeurMax();
    double longeurMoyenne();
    double tempsMoyenAttente();
    void ajouter(Client);
    bool estVide();
    Client retirer();
};

#endif //BANKPROJECT_QUEUE_H
