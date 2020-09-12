//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_CLIENT_H
#define BANKPROJECT_CLIENT_H
#include <iostream>
class Client : public std::error_code {

public :
    Client();
    Client(double arrivalTime);
    double getArrivaltime();

private:
    double arrivalT;
};

#endif //BANKPROJECT_CLIENT_H
