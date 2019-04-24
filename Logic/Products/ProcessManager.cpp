//
// Created by jondorito on 22/04/19.
//

#include "ProcessManager.h"

ProcessManager::ProcessManager() {

}

bool ProcessManager::isFull() {
    return *this->agenda->getLength() >= 3;
}

Car* ProcessManager::newProcess(Car* process) {
    if(!this->isFull()){
        this->agenda->add(process);
        return nullptr;
    }else{
        Car* temp = this->agenda->getHead()->getData();
        this->agenda->remove(0);
        this->agenda->add(process);
        return temp;
    }
}

void ProcessManager::updateLine() {
    for(int i = 0; i < 3; i++){
        if(this->agenda->get(i)->getData()->isDone()){
            this->agenda->remove(i);
            this->full = false;
        }
    }
}
