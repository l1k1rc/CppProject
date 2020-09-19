//
// Created by l1k1 on 11/09/2020.
//

#ifndef BANKPROJECT_EVENT_H
#define BANKPROJECT_EVENT_H
class Event
{
protected :
    Event(double time);

    double heure();

public:
    Event();

    virtual bool traiter();
};
#endif //BANKPROJECT_EVENT_H
