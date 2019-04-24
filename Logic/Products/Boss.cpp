//
// Created by jondorito on 22/04/19.
//

#include "Boss.h"

Boss::Boss() {
    for(int i = 0; i < 6; i++){
        this->productionLine->add(new ProcessManager(i));
    }
}

void Boss::addToTheQueue(Car* newCar) {
    this->mainQueue->addData(newCar);
}
void Boss::getHeadIntoProduction() {
    Car* temp = this->mainQueue->getHead();
    int type = *temp->getType();
    Car* result = this->productionLine->get(type)->getData()->newProcess(temp);
    if(result != nullptr){
        mainQueue->addData(result);
    }
}

void Boss::updateLines() {
    for(int i = 0; i < 6; i++){
        this->productionLine->get(i)->getData()->updateLine();
    }
}
