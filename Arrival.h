//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Arrival.h
 * \brief Classe Arrival
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */

#ifndef BANKPROJECT_ARRIVAL_H
#define BANKPROJECT_ARRIVAL_H
#include "Event.h"
#include "poisson.h"
/*! \class Arrival
   * \brief classe representant l'évènement d'arriver du client
   * La classe permet de gérer l'arriver du client dans la banque en utilisant un booléen
   */
class Arrival : public Event{
public :
    /*!
     *  \brief Constructeur
     *
     *  Constructeur de la classe Arrival
     */
    Arrival();
    /*!
     *  \brief Traiter l'arrivé du client
     *
     *  Methode qui retourne un booléen pour dire si oui ou non un client arrive dans la banque au temps t
     *  On utilise la loi de poisson avec une moyenne à 1. Si la valeur retournée est supérieur à 1, on ajoute un client dans la banque
     *  Sinon on n'ajoute pas de client.
     *
     *  \return true si la valeur de la loi de poisson est > 1
     *  false sinon
     */
    bool traiter();
private:
    Poisson poisson; /*!<Initialisation de la variable de poisson que nous utiliserons pour traiter l'arrivé du client */
};
#endif //BANKPROJECT_ARRIVAL_H
