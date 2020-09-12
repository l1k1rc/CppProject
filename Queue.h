//
// Created by l1k1 on 11/09/2020.
//

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
    void add(Client);
    bool isEmpty();
    Client remove();
    int getQueueSize();

private:
    std::list<Client> clientQueue;
};

#endif //BANKPROJECT_QUEUE_H
