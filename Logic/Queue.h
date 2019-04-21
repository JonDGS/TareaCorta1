//
// Created by jondorito on 19/04/19.
//

#ifndef TAREACORTA1_QUEUE_H
#define TAREACORTA1_QUEUE_H

#include "Node.h"
#include <iostream>
#include <string>

template <class T>
class Queue {
private:
    Node<T>* head = nullptr;
    Node<T>* last = nullptr;
public:
    void addData(T);
    T getHead();
    void setNewHead();
    void printQueue();
    T readHead();
};


/**
 * This method changing the previous head for the next one
 * @tparam T
 */
template <class T>
void Queue<T>::setNewHead() {
    Node<T>* temp = this->head;
    this->head = temp->getNext();
}

/**
 * This methods receives some data and stores it in a node the goes at the end of the queue
 * @tparam T
 * @param data
 */
template <class T>
void Queue<T>::addData(T data) {
    Node<T>* temp = new Node<T>(data);
    if(this->head == nullptr){
        this->head = temp;
    }else{
        if(this->last == nullptr){
            this->head->setNext(temp);
            this->last = temp;
        }else{
            this->last->setNext(temp);
            this->last = temp;
        }
    }
}


/**
 * This function returns the data stored in the head of the Queue, also erases it from memory
 * @tparam T
 * @return
 */
template <class T>
T Queue<T>::getHead() {
    Node<T>* temp = this->head;
    T datacpy = temp->getData();
    setNewHead();
    delete(temp);
    return datacpy;
}


/**
 * This is method is used for testing purposes only, it prints each node with the value store in it
 * @tparam T
 */
template <class T>
void Queue<T>::printQueue() {
    if(this->head == nullptr){
        std::cout << "Queue is empty" << std::endl;
    }else{
        Node<T>* temp = this->head;
        while(temp != nullptr){
            std::cout << "Node has a store value of " << temp->getData() << std::endl;
            temp = temp->getNext();
        }
    }
}

/**
 * This function return the value of the head node WITHOUT erasing it from memory
 * @tparam T
 * @return
 */
template <class T>
T Queue<T>::readHead() {
    return this->head->getData();
}

#endif //TAREACORTA1_QUEUE_H
