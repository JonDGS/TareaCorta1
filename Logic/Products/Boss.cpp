//
// Created by jondorito on 22/04/19.
//

#include "Boss.h"


Boss::Boss() {
    for(int i = 5; i >= 0; i--){
        this->productionLine->add(new ProcessManager(i));
    }
    this->currentTime = new timer();
    this->currentTime->start();
}

/**
 * Adds a car to queue of waiting cars
 * @param newCar
 */
void Boss::addToTheQueue(Car* newCar) {
    this->mainQueue->addData(newCar);
}

/**
 * Get the head of the main queue an assigns it to a production line
 */
void Boss::getHeadIntoProduction() {
    Car* temp = this->mainQueue->getHead();
    if(temp != nullptr) {
        int type = *temp->getType();
        Car *result = this->productionLine->get(type - 1)->getData()->newProcess(temp);
        if (result != nullptr) {
            mainQueue->addData(result);
        }
    }
}

/**
 * Request every line to update its list
 */
void Boss::updateLines() {
    for(int i = 0; i < 6; i++){
        this->productionLine->get(i)->getData()->updateLine();
    }
}

/**
 * Request a line to take car of a new arrival of a Car
 * @param newCar
 */
void Boss::startProduction(Car* newCar) {
    int type = *newCar->getType();
    Car* result = this->productionLine->get(type - 1)->getData()->newProcess(newCar);
    if(result != nullptr){
        mainQueue->addData(result);
    }
}

/**
 * Returns the timer for the mainQueue
 * @return timer for main queue
 */
timer *Boss::getTimer() {
    return this->currentTime;
}
