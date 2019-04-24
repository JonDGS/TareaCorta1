//
// Created by jondorito on 16/04/19.
//

#include <cstdlib>
#include "Car.h"

Car::Car(int type) {
    this->setType(type);
    this->time = new timer();
}

/**
 * This function assigns a value meant to be read as seconds to each process starting from processA
 * @param a
 * @param b
 * @param c
 * @param d
 * @param e
 * @param f
 */
void Car::setProcess(int a, int b, int c, int d, int e, int f) {
    this->process[0] = a;
    this->process[1] = b;
    this->process[2] = c;
    this->process[3] = d;
    this->process[4] = e;
    this->process[5] = f;
}


/**
 * Sets the type of car this object is going to be
 * @param type
 */
void Car::setType(int type) {
    this->type = type;
    switch(type){
        default:
            std::exit(15);
        case 1:
            this->setProcess(2, 2, 4, 1, 3, 1);
            break;
        case 2:
            this->setProcess(1, 1, 2, 3, 2, 1);
            break;
        case 3:
            this->setProcess(3, 1, 2, 1, 4, 1);
            break;
        case 4:
            this->setProcess(3, 2, 1, 4, 1, 2);
            break;
        case 5:
            this->setProcess(1, 2, 4, 3, 4, 1);
            break;
        case 6:
            this->setProcess(4, 4, 2, 1, 3, 1);
            break;
    }
}

/**
 * Get the time an specific process takes base on the index, process A being 0 and so on
 * @param index
 * @return
 */
int* Car::getProcess(int index) {
    return &this->process[index];
}

int* Car::getType() {
    &this->type;
}

timer* Car::getTimer() {
    return this->time;
}

bool Car::isDone() {
    return this->done;
}
