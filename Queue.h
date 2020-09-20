//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Queue.h
 * \brief Classe Queue
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#ifndef BANKPROJECT_QUEUE_H
#define BANKPROJECT_QUEUE_H
#include "Client.h"
#include <list>

/*! \class Queue
   * \brief classe representant la file d'attente de la banque
   *
   *
   */

class Queue : public Client{

public :
    /*!
     *  \brief Constructeur
     *
     *  Constructeur de la classe Queue
     *
     */
    Queue();
    /*!
     *  \brief Longueur Max de la file d'attente
     *
     *  Méthode qui permet de récuperer la longueur maximale de la file d'attente à la fin de la simulation
     *
     *  \return un entier, la longueur max de la file
     */
    int longMAX();
    /*!
     *  \brief Longueur Moyenne de la file d'attente
     *
     *  Méthode qui permet de récuperer la longueur moyenne de la file d'attente à la fin de la simulation
     *
     *  \return un entier, la longueur moyenne de la file
     */
    double longAVER();

    [[maybe_unused]] double averageWaitingTime();
    /*!
     *  \brief Ajout d'un client dans la file
     *
     *  Méthode qui permet d'ajouter un client dans la file en utilisant le Client et son id'
     *
     */
    void add(Client, int clientNumb);
    [[nodiscard]] bool isEmpty() const;
    /*!
     *  \brief Supprimer un client de la file d'attente
     *
     *  Méthode qui permet de supprimer un client de la file d'attente pour qu'il soit traité par un caissier
     *
     */
    Client remove();
    /*!
     *  \brief Récuperer la taille actuelle de la file
     *
     *
     */
    [[nodiscard]] int getQueueSize() const;
    /*!
     *  \brief Ajouter dans une liste la taille de la queue actuelle
     *
     *  Méthode qui permet d'ajouter dans une liste la taille actuelle de la file en prévision d'effectuer une moyenne avec toutes les valeurs de la liste
     *
     */
    void setQueueSize();
public:
    std::list<int> queueSize;/*!<Liste des tailles de la file d'attente pour construire la moyenne de la file*/
    std::list<Client> clientQueue;/*!< Liste des clients présents dans la queue*/
};

#endif //BANKPROJECT_QUEUE_H
