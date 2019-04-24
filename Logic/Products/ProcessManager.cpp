//
// Created by jondorito on 22/04/19.
//

#include "ProcessManager.h"

ProcessManager::ProcessManager(int identifier) {
    this->identifier = identifier;
}

bool ProcessManager::isFull() {
    return *this->agenda->getLength() >= 3;
}

Car* ProcessManager::newProcess(Car* process) {
    if(!this->isFull()){
        this->agenda->add(process);
        process->getTimer()->start();
        return nullptr;
    }else{
        Car* temp = this->agenda->getHead()->getData();
        temp->getTimer()->stop();
        this->agenda->remove(0);
        this->agenda->add(process);
        process->getTimer()->start();
        return temp;
    }
}

void ProcessManager::updateLine() {
    for(int i = 0; i < *this->agenda->getLength(); i++){
        Car* temp = this->agenda->get(i)->getData();
        int timeItTakes = *temp->getProcess(this->identifier);
        if(temp->getTimer()->isOver(timeItTakes)){
            this->agenda->remove(i);
            this->full = false;
        }
    }
}
