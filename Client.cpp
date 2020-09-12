//
// Created by l1k1 on 11/09/2020.
//
#include "Client.h"
#include <iostream>
Client::Client() {}

Client::Client(int arrivalTime) {
    this->arrivalT = arrivalTime;
}

double Client::getArrivaltime() {
    return arrivalT;
}

