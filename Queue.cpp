//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Queue.cpp
 * \brief Classe Queue
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#include "Client.h"
#include "Queue.h"
#include "Color.h"

Queue::Queue() {
}

void Queue::add(Client c, int clientNumb) {
    std::cout << GREEN << "Client arrival n°"<<clientNumb << RESET << std::endl;
    clientQueue.push_back(c);
}

double Queue::averageWaitingTime() {

}

bool Queue::isEmpty() {
    if (clientQueue.empty()) {
        return true;
    } else {
        return false;
    }
}

double Queue::longAVER() {
    double somme = 0;
    int taille = queueSize.size();
    for (std::list<int>::iterator it = queueSize.begin(); it != queueSize.end(); ++it) {
        double item = *it;
        somme += item;
    }
    return somme / taille;
}

int Queue::longMAX() {
    int max=0;
    for(int clientQ : queueSize){
        if(clientQ>max)
            max=clientQ;
    }
    return max;
}

Client Queue::remove() {
    Client c;
    if (!clientQueue.empty()) {
        c = clientQueue.front();
        clientQueue.pop_front();
        return c;
    }
}
void Queue::setQueueSize() {
    queueSize.push_front(clientQueue.size());
}
int Queue::getQueueSize() {
    std::cout << "Size queue is : " << BOLDCYAN << clientQueue.size() << RESET << " clients." << std::endl;
    return clientQueue.size();
}
