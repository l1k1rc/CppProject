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
#include <iostream>
Client::Client() {}

Client::Client(int arrivalTime) {
    this->arrivalT = arrivalTime;
}

double Client::getArrivaltime() {
    return arrivalT;
}

