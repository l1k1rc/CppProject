//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_ARRIVAL_H
#define BANKPROJECT_ARRIVAL_H
#include "Event.h"
#include "poisson.h"
class Arrival : public Event{
public :
    Arrival();
    bool traiter();
private:
    Poisson poisson;
};
#endif //BANKPROJECT_ARRIVAL_H
