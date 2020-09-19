//
// Created by l1k1 on 11/09/2020.
//

#include "Arrival.h"

Arrival :: Arrival(){
    poisson.init();

}

// Client arrival then u have to know if
bool Arrival ::traiter(){
    return poisson.next() > 1;
}

