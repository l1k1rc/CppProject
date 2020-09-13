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
   * \brief classe representant la banque et permet de gérer les caissiers et les clients
   *
   *
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
     *  \param cCount : nombre de caissier de la banque
     *  \param queueT : file d'attente
     */
    Bank(int cCount, Queue queueT);
    /*!
     *  \brief Nombre de caissier dans la banque
     *
     *  Méthode qui permet de récuperer le nombre de caissier dans la banque
     *
     *  \return un entier, le nombre de caissier
     */
    int nbCashier();
    /*!
     *  \brief Nombre de client dans la banque
     *
     *  Méthode qui permet de récuperer le nombre de client actuellement dans la banque
     *
     *  \return un entier, le nombre de client
     */
    int nbClients();
    /*!
     *  \brief Retourne les caissiers libres
     *
     *  Méthode qui permet de récuperer les caissiers étant libres
     *
     *  \return les caissiers libres
     */
    Cashier *getFreeCashier();
    /*!
     *  \brief Récupère la file d'attente
     *
     *  Méthode qui permet de récuperer la file d'attente
     *
     *  \return la file d''attente
     */
    Queue getQueue();
    /*!
     *  \brief Afficher un texte
     *
     *  Méthode qui permet d'afficher un texte
     *
     *  \return une chaine de caractère
     */
    std::string toString();
    /*!
     *  \brief Savoir si un caissier est libre
     *
     *  Méthode qui permet de savoir si un caissier est disponible dans la banque
     *
     *  \return true si le caissier est libre,
     *          false sinon
     */
    bool isACashierFree();
    /*!
     *  \brief Retourne la liste des caissiers de la banque
     *
     *  Méthode qui permet de récuperer les caissiers de la banque
     *
     *  \return une liste de caissiers
     */
    Cashier *getCashiersArray();
public:
    static const int DIM = 3;
    Cashier cashiers[DIM] = {Cashier(),Cashier(), Cashier()};
    Queue queue;
};
#endif //BANKPROJECT_BANK_H
