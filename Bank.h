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
    Queue *getQueue();
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
    /*!
     *  \brief Connaître la disponibilité des caissiers
     *
     *  Cette méthode va nous permettre de savoir si tous les caissiers sont libres en même temps.
     *  Nous utilisons cette méthode pour stopper la simulation lorsqu'il n'y a plus de client dans la queue
     *  et que tous les caissiers ont fini leur service.
     *
     *  \return true si tous les caissiers sont libres
     *  false si au moins un des caissiers n'est pas libre
     */
    bool allFree();
public:
    static const int DIM = 5;
    Cashier cashiers[DIM];
    Queue queue;
};
#endif //BANKPROJECT_BANK_H
