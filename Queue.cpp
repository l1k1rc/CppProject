//
// Created by l1k1 on 11/09/2020.
//

#include "Client.h"
#include "Queue.h"
#include <list>
Queue :: Queue(){}

void Queue::add(Client c) {
    clientQueue.push_back(c);
}

double Queue::averageWaitingTime() {

}

bool Queue::isEmpty() {
    if (clientQueue.empty())
        return true;
    else {
        std::cout << "Queue isn't empty." << std::endl;
        return false;
    }
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

int Queue::getQueueSize() {
    std::cout << "Size queue in QueueClass is : " << clientQueue.size() << std::endl;
    return clientQueue.size();
}
