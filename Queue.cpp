//
// Created by l1k1 on 11/09/2020.
//

#include "Client.h"
#include "Queue.h"
#include "Color.h"

Queue::Queue() {}

void Queue::add(Client c, int clientNumb) {
    std::cout << GREEN << "Client arrival n°"<<clientNumb << RESET << std::endl;
    clientQueue.push_back(c);
}

double Queue::averageWaitingTime() {

}

bool Queue::isEmpty() {
    if (clientQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
        return true;
    } else {
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
    if (!clientQueue.empty()) {
        c = clientQueue.front();
        clientQueue.pop_front();
        return c;
    }
}

int Queue::getQueueSize() {
    std::cout << "Size queue is : " << BOLDCYAN << clientQueue.size() << RESET << " clients." << std::endl;
    return clientQueue.size();
}
