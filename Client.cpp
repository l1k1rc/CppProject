//
// Created by l1k1 on 11/09/2020.
//

/*!
 * \file Client.cpp
 * \brief Classe Client
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */

#include "Client.h"
Client::Client() = default;

Client::Client(int arrivalTime) {
    this->arrivalT = arrivalTime;
    this->queueTime = 0;
}

double Client::getArrivaltime() const {
    return arrivalT;
}
void Client::incrQueueTime() {
    this->queueTime++;
}
