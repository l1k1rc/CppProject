//
// Created by l1k1 on 11/09/2020.
//
/*!
 * \file Event.h
 * \brief Classe Event
 * \author SAINT-AMAND Matthieu, DUCROUX Guillaume
 * \version 1
 */
#ifndef BANKPROJECT_EVENT_H
#define BANKPROJECT_EVENT_H

/*! \class Event
   * \brief classe representant un évènement de la simulation comme l'arrivée et le départ d'un client dans la banque
   *
   *
   */
class Event
{
protected :
    [[maybe_unused]] explicit Event(double time);

    [[maybe_unused]] double heure();

public:
    /*!
     *  \brief Constructeur
     *
     *  Constructeur de la classe Event
     *
     */
    Event();
    /*!
     *  \brief Traitement d'un évènement de la simulation
     *
     *  La méthode diffère en fonction de l'évènement.
     *  Pour un départ d'un client voir la méthode treat de Departure
     *  Pour une arrivée d'un client dans la banque voir la méthode treat de Arrival
     *
     *  \return un booléen en fonction de la sous classe Arrival ou Departure
     *
     */
    virtual bool treat();
};
#endif //BANKPROJECT_EVENT_H
