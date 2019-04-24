//
// Created by jondorito on 22/04/19.
//

#include "ProcessManager.h"

ProcessManager::ProcessManager(int identifier) {
    this->identifier = identifier;
}


/**
 * This function returns whether or not the agenda is full
 * @return boolean indicating is the agenda is full
 */
bool ProcessManager::isFull() {
    return *this->agenda->getLength() >= 3;
}

/**
 * Manages the arrival of new process and a Car if it full to take care of the new process
 * @param process
 * @return Car that has been throw out of the line
 */
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

/**
 * Checks if any cars are done and removes them from the list
 */
void ProcessManager::updateLine() {
    for(int i = 0; i < *this->agenda->getLength(); i++){
        Car* temp = this->agenda->get(i)->getData();
        std::cout << "manager " << this->identifier << " Node has data " << temp << std::endl;
        int timeItTakes = *temp->getProcess(this->identifier);
        if(temp->getTimer()->isOver(timeItTakes)){
            this->agenda->remove(i);
            this->full = false;
        }
    }
}
