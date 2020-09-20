//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Departure.h
 * \brief Classe Departure
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#ifndef BANKPROJECT_DepartureURE_H
#define BANKPROJECT_DepartureURE_H
#include "Event.h"
/*! \class Departure
   * \brief classe representant l'évènement de départ d'un client de la banque'
   *
   *
   */
class Departure : public Event {
public :
    /*!
     *  \brief Constructeur
     *
     *  Constructeur de la classe Departure
     */
    Departure();
    bool traiter() override;
};
#endif //BANKPROJECT_DepartureURE_H
