#include <iostream>
#include <stdlib.h>

#include "Queue.h"
#include <string>


/**
 * At the moment being used to test the queue
 * @return
 */
int main() {
    Queue<int> *queue = new Queue<int>;
    while(true) {
        std::cout << "What do you wanna do?" << std::endl;
        std::cout << "Enter 1 to add a value to the queue" << std::endl;
        std::cout << "Enter 2 get the first value of the queue" << std::endl;
        std::cout << "Enter 3 to print the current queue" << std::endl;
        std::cout << "Enter 4 to just print out the current head" << std::endl;
        std::string input;
        std::cin >> input;
        if (input == "1") {
            std::cout << "Which value do you wanna store?: ";
            int value;
            std::cin >> value;
            std::cout << std::endl;
            queue->addData(value);
            std::cout << "Value saved" << std::endl;
        }else{
            if(input == "2"){
                int head = queue->getHead();
                std::cout << "The value in the head right now is " << head << std::endl;
            }else{
                if(input == "3"){
                    queue->printQueue();
                }else{
                    if(input == "4"){
                        int head = queue->readHead();
                        std::cout << "The value is " << head << std::endl;
                    }else{
                        std::cout << "Use one of the options provided above" << std::endl;
                    }
                }
            }
        }
    }
}