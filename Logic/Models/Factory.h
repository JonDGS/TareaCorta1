//
// Created by jondorito on 22/04/19.
//

#ifndef TAREACORTA1_FACTORY_H
#define TAREACORTA1_FACTORY_H

#include "../Data_Structures/Queue.h"
#include "../Products/ProcessManager.h"
#include "../Products/Boss.h"


class Factory {
private:
    Boss* mainManager = new Boss();
};


#endif //TAREACORTA1_FACTORY_H
