//
// Created by l1k1 on 11/09/2020.
//

/*!
 * \file Client.h
 * \brief Classe Client
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */

#ifndef BANKPROJECT_CLIENT_H
#define BANKPROJECT_CLIENT_H
#include <iostream>

/*! \class Client
   * \brief classe representant le client
   *
   *
   */
class Client : public std::error_code {

public :
    Client();
/*!
     *  \brief Constructeur
     *
     *  Constructeur de la classe Client
     *
     *  \param arrivalTime : heure d'arrivée du client dans la banque
     */
    Client(int arrivalTime);
    /*!
     *  \brief Heure d'arrivée du client dans la banque
     *
     *  Méthode qui permet de récuperer l'heure d'arrivée du client
     *
     *  \return l'heure d'arrivée du client dans la banque
     */
    double getArrivaltime();

private:
    double arrivalT; /*!< Heure d'arrivée du client dans la banque*/
};

#endif //BANKPROJECT_CLIENT_H
