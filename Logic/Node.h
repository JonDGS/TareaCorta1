//
// Created by jondorito on 19/04/19.
//

#ifndef TAREACORTA1_NODE_H
#define TAREACORTA1_NODE_H

#include <stddef.h>

template <class T>
class Node {
private:
    Node<T>* next = nullptr;
    T data;
public:
    Node<T>(T);
    T getData();
    Node<T>* getNext();
    void setNext(Node<T>*);

};


/**
 * This function creates a node with "data" in it
 * @tparam T
 * @param data
 */
template <class T>
Node<T>::Node(T data) {
    this->data = data;
}


/**
 * This function returns the data stored in the node
 * @tparam T
 * @return
 */
template <class T>
T Node<T>::getData() {
    return this->data;
}

/**
 * This function returns a pointer to the next node if any
 * @tparam T
 * @return
 */
template <class T>
Node<T>* Node<T>::getNext() {
    return this->next;
}


/**
 * This functions sets the next node that the current node points to
 * @tparam T
 * @param temp
 */
template <class T>
void Node<T>::setNext(Node<T> *temp) {
    this->next = temp;
}


#endif //TAREACORTA1_NODE_H
