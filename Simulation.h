//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Simulation.h
 * \brief Classe Simulation
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#ifndef BANKPROJECT_SIMULATION_H
#define BANKPROJECT_SIMULATION_H
#include "Bank.h"
#include "poisson.h"
#include "Arrival.h"
#include "Departure.h"

/*! \class Simulation
   * \brief classe representant la simulation de la banque
   *
   *
   */

class Simulation {
public :
    Simulation();
/*!
     *  \brief Constructeur
     *
     *  Constructeur de la classe Simulation
     *
     *  \param simulationT: Le temps de simulation prévu
     *  \param cashierT: Le nombre de caissier dans la banque
     *  \param averageS: Le temps moyen de service d'un caissier pour un client
     */
    Simulation(int simulationT, int cashierT, int averageS);
    /*!
     *  \brief Lancer la simulation
     *
     *  Méthode qui permet de créer et lancer la simulation
     *
     *
     */
    void simulate();
    /*!
     *  \brief Mise à jour du temps de service
     *
     *  Méthode qui pour chaque caissier, si ce dernier travaille, décremente le temps de service du client qu'il traite
     *
     *
     */
    void updateServices();
    /*!
     *  \brief Taiter les clients qui restent dans la file une fois le temps de simulation prévus terminé
     *
     *  Méthode qui permet de terminer le traitement des clients qui sont encore dans la file d'attente après que le temps de simulation prévu soit dépassé
     *
     *  \param simTime: le temps de simulation prévu initialement
     *
     */
    void finalize(int simTime);
    /*!
     *  \brief Affiche les statistiques de fin de simulation
     *
     *  Méthode qui permet d'afficher les statistiques de fin de simulation qui sont : le temps de service moyen par caissier,
     *  la longueur max et moyenne de la file d'attente,
     *  le taux d'occupation par caissier,
     *  le nombre de client servis par caissier et au total,
     *  le temps de simulation initialement prévu et le temps final de simu
     *
     */
    void statistic();
    Arrival arrival;/*!< Initialisation de la classe Arrival*/
    Departure departure;/*!< Initialisation de la classe Departure*/
private:
    Poisson p;/*!< Création de la variable pour utiliser la loi de poisson*/
    Bank bank;/*!< Création de la banque*/
    int simulationTime{};/*!< Variable du temps de simulation de départ*/
    int cashierCount{};/*!< Variable du nombre de caissier dans la banque*/
    int averageService{};/*!< Variable de la moyenne de temps de service d'un caissier pour un client*/
};
#endif //BANKPROJECT_SIMULATION_H
