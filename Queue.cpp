//
// Created by l1k1 on 11/09/2020.
//

#include "Client.h"
#include "Queue.h"

Queue :: Queue(){}

void Queue::add(Client c) {
    clientQueue.push_back(c);
}

double Queue::averageWaitingTime() {

}

bool Queue::isEmpty() {
    if (clientQueue.empty())
        return true;
    else
        return false;
}

double Queue::longAVER() {

}

int Queue::longMAX() {
    return clientQueue.size();
}

Client Queue::remove() {
    Client c;
    if(!clientQueue.empty()){
        c = clientQueue.front();
        clientQueue.pop_front();
        return c;
    }
}
