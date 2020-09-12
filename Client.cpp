//
// Created by l1k1 on 11/09/2020.
//
#include "Client.h"
#include <iostream>
Client::Client() {

}

double Client::heureArrivee() {
    std::cout << "Raton" << std::endl;
    return 0.5;
}

Client::Client(std::string name1) {
    this->name = name1;
}

std::string Client::getName() {
    return name;
}