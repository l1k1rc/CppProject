//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Arrival.cpp
 * \brief Classe Arrival
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#include "Arrival.h"

Arrival :: Arrival(){
    Poisson::init();

}

// Client arrival then u have to know if
bool Arrival ::treat(){
    return Poisson::next() > 1;
}

