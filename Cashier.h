//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Cashier.h
 * \brief Classe Cashier
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */

#ifndef BANKPROJECT_CASHIER_H
#define BANKPROJECT_CASHIER_H
#include "Client.h"
#include<list>

/*! \class Cashier
   * \brief classe representant le caissier
   *
   *  La classe gère le caissier par le biais de méthode
   *  comme servir le client, savoir si le caissier est libre
   *  ou en train de servir quelqu'un
   */

class Cashier {
private:
    int NbClient = 0; /*!< Nombre de client servis par le caissier*/
    bool dispo = true; /*!< Variable pour savoir si le caissier est libre*/
    /*!< Temps de service du caissier pour un client*/
    std::list<int> ListTime; /*!< Liste des temps de service d'un caissier pour tout ses clients*/
    std::list<int> ListDisp;
public :
    /*!
     *  \brief Constructeur
     *
     *  Constructeur de la classe Cashier
     */
    Cashier();
    /*!
     *  \brief temps de service avant libération
     *
     *  Methode qui permet de simuler le temps de service du caissier
     */
    void doService();
    /*!
     *  \brief Temps Moyen de service
     *
     *  Methode qui permet de calculer le temps moyen
     *  de service d'un caissier de tous ses clients
     *
     *  \return le temps moyen de service
     */
    double tempsMoyenService();
    /*!
     *  \brief Incrémentation du nombre de client servis par un caissier
     *
     *  Methode qui permet d'incrémenter le nombre de client servis par un caissier
     *
     *  \return un entier du nombre de client servis
     */
    int nbClient();
    /*!
     *  \brief Taux d'occupation d'un caissier
     *
     *  Methode qui permet de connaître le pourcentage d'occupation de chacun des caissiers à la fin de la simulation
     *
     *  \return un double, le pourcentage d'occupation
     */
    double tauxOccupation();
    /*!
     *  \brief Caissier libre
     *
     *  Methode qui permet de vérifier si un caissier est libre ou non
     *
     *  \return true si caissier libre,
     *  false sinon
     */
    bool isFree();
    /*!
     *  \brief Servir le client
     *
     *  Methode qui permet de servir un client
     *
     *  \param Client : le client à servir,
     *  \param serviceT : le temps de service du client
     */
    void servir(Client, int serviceT);
    /*!
     *  \brief Libérer le caissier
     *
     *  Methode qui permet de libérer un caissier après
     *  avoir servis un client
     */
    void liberer();
    int id;
    int serviceTime;

};
#endif //BANKPROJECT_CASHIER_H
