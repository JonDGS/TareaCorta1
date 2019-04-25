#include <iostream>
#include <stdlib.h>

#include "Data_Structures/Queue.h"
#include "Models/Car.h"
#include "Models/timer.h"
#include "Products/Boss.h"
#include <string>
#include <sstream>


/**
 * At the moment being used to test the queue
 * @return
 */
int main() {
    while(true) {
        std::cout << "Which option do you wanna use" << std::endl;
        std::cout << "Enter 1 for 3 Type 1 Cars" << std::endl;
        std::cout << "Enter 2 for 4 Type 1 Cars and 3 Type 4 Cars" << std::endl;
        std::cout << "Enter 3 for 2 Type 3 Cars and 1 Type 5 Car" << std::endl;
        std::cout << "Enter 4 for 4 Type 3 Cars, 4 Type 2 and 4 Type 1" << std::endl;
        std::cout << "Enter 5 to exit the menu" << std::endl;
        std::string input;
        std::cin >> input;
        std::stringstream ss(input);
        int num;
        ss >> num;
        switch(num){
            default:
                return 20;
            case 1:{
                Boss *boss = new Boss();
                timer *time = new timer;
                time->start();
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(1));
                while (!time->isOver(15)) {
                    boss->updateLines();
                    if (boss->getTimer()->isOver(5)) {
                        std::cout << "5 seconds have passed" << std::endl;
                        boss->getHeadIntoProduction();
                        boss->getTimer()->reset();
                        boss->getTimer()->start();
                    }
                }
                break;
            }
            case 2: {
                Boss *boss = new Boss();
                timer *time = new timer;
                time->start();
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(4));
                boss->startProduction(new Car(4));
                boss->startProduction(new Car(4));
                while (!time->isOver(20)) {
                    boss->updateLines();
                    if (boss->getTimer()->isOver(5)) {
                        std::cout << "5 seconds have passed" << std::endl;
                        boss->getHeadIntoProduction();
                        boss->getTimer()->reset();
                        boss->getTimer()->start();
                    }
                }
                break;
            }
            case 3:{
                Boss *boss = new Boss();
                timer *time = new timer;
                time->start();
                boss->startProduction(new Car(3));
                boss->startProduction(new Car(3));
                boss->startProduction(new Car(5));
                while (!time->isOver(10)) {
                    boss->updateLines();
                    if (boss->getTimer()->isOver(5)) {
                        std::cout << "5 seconds have passed" << std::endl;
                        boss->getHeadIntoProduction();
                        boss->getTimer()->reset();
                        boss->getTimer()->start();
                    }
                }
                break;
            }
            case 4:{
                Boss *boss = new Boss();
                timer *time = new timer;
                time->start();
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(1));
                boss->startProduction(new Car(2));
                boss->startProduction(new Car(2));
                boss->startProduction(new Car(2));
                boss->startProduction(new Car(2));
                boss->startProduction(new Car(3));
                boss->startProduction(new Car(3));
                boss->startProduction(new Car(3));
                boss->startProduction(new Car(3));
                while (!time->isOver(35)) {
                    boss->updateLines();
                    if (boss->getTimer()->isOver(5)) {
                        std::cout << "5 seconds have passed" << std::endl;
                        boss->getHeadIntoProduction();
                        boss->getTimer()->reset();
                        boss->getTimer()->start();
                    }
                }
                break;
            }
            case 5:
                return 0;
        }
    }
}