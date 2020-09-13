//
// Created by l1k1 on 11/09/2020.
//

/*!
 * \file Bank.h
 * \brief Classe Bank
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */


#ifndef BANKPROJECT_BANK_H
#define BANKPROJECT_BANK_H
#include "Cashier.h"
#include "Queue.h"

/*! \class Bank
   * \brief classe representant la banque
   *
   *  La classe Bank gère la file d'attente, les caissiers et
   *  les clients arrivants dans la banque
   */
class Bank
{
public :
    Bank();
/*!
     *  \brief Constructeur
     *
     *  Constructeur de la classe Bank
     *
     *  \param cCount : déclarer le nombre de caissier,
     *  \param queueT : file d'attente
     */
    Bank(int cCount, Queue queueT);
    /*!
     *  \brief Nombre de caissier dans la banque
     *
     *  Méthode qui permet de récuperer le nombre de
     *  caissier dans la banque
     *
     *  \return un entier, le nombre de caissier
     */
    int nbCashier();
    /*!
     *  \brief Nombre de client dans la banque
     *
     *  Méthode qui permet de récuperer le nombre de
     *  client actuellement dans la banque
     *
     *  \return un entier, le nombre de client
     */
    int nbClients();
    /*!
     *  \brief Retourne les caissiers libres
     *
     *  Méthode qui permet de recupérer les caissiers étant libre
     *
     *  \return les caissiers libre
     */
    Cashier *getFreeCashier();
    /*!
     *  \brief Récupère la file d'attente
     *
     *  Méthode qui permet de recupérer la file d'attente
     *
     *  \return la file d'attente
     */
    Queue getQueue();
    /*!
     *  \brief Afficher un texte
     *
     *  Méthode qui permet d'afficher un texte'
     *
     *  \return une chaine de caractère
     */
    std::string toString();
    /*!
     *  \brief Savoir si un caissier est libre
     *
     *  Méthode qui permet de savoir si un caissier est disponible
     *
     *  \return true, si le caissier est libre
     *  false sinon
     */
    bool isACashierFree();
    /*!
     *  \brief Retourne la liste des caissiers de la banque
     *
     *  Méthode qui permet de recupérer les caissiers de la banque
     *
     *  \return les caissiers de la banque
     */
    Cashier *getCashiersArray();
public:
    Cashier cashiers[3] = {Cashier(),Cashier(), Cashier()}; /*!< Les caissiers de la banque*/
    Queue queue; /*!< File d'attente*/
};
#endif //BANKPROJECT_BANK_H
