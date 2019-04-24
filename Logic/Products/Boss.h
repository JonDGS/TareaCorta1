//
// Created by jondorito on 22/04/19.
//

#ifndef TAREACORTA1_BOSS_H
#define TAREACORTA1_BOSS_H


#include "ProcessManager.h"
#include "../Data_Structures/GenericLinkedList.h"
#include "../Data_Structures/Queue.h"

class Boss{
private:
    GenericLinkedList<ProcessManager*>* productionLine;
    Queue<Car*>* mainQueue = new Queue<Car*>;
public:
    void addToTheQueue(Car*);
    void getHeadIntoProduction();
    void updateLines();
};


#endif //TAREACORTA1_BOSS_H
