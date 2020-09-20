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

    [[maybe_unused]] double averageWaitingTime();
    void add(Client, int clientNumb);
    [[nodiscard]] bool isEmpty() const;
    Client remove();
    [[nodiscard]] int getQueueSize() const;
    void setQueueSize();
public:
    std::list<int> queueSize;
    std::list<Client> clientQueue;
};

#endif //BANKPROJECT_QUEUE_H
