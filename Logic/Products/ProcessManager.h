//
// Created by jondorito on 22/04/19.
//

#ifndef TAREACORTA1_PROCESSMANAGER_H
#define TAREACORTA1_PROCESSMANAGER_H

#include "../Models/Car.h"
#include "../Data_Structures/GenericLinkedList.h"


class ProcessManager{
private:
    GenericLinkedList<Car*>* agenda = new GenericLinkedList<Car*>;
    bool full = false;
    int identifier;
public:
    ProcessManager(int);
    bool isFull();
    Car* newProcess(Car*);
    void updateLine();
};


#endif //TAREACORTA1_PROCESSMANAGER_H
