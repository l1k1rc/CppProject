//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Queue.h
 * \brief Classe Queue
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#ifndef BANKPROJECT_QUEUE_H
#define BANKPROJECT_QUEUE_H
#include "Client.h"
#include <list>

class Queue : public Client{

public :
    Queue();
    int longMAX();
    double longAVER();
    double averageWaitingTime();
    void add(Client, int clientNumb);
    bool isEmpty();
    Client remove();
    int getQueueSize();

public:
    std::list<Client> clientQueue;
};

#endif //BANKPROJECT_QUEUE_H
