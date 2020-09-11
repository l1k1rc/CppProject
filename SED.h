//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_SED_H
#define BANKPROJECT_SED_H
#include "Evenement.h"

class SED {

public :
    SED();
    void ajuster(Evenement);
    double heure();
    void lancer();
};
#endif //BANKPROJECT_SED_H
