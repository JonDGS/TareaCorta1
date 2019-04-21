//
// Created by jondorito on 16/04/19.
//

#ifndef TAREACORTA1_CAR_H
#define TAREACORTA1_CAR_H


class Car {
private:
    int process[6];
    int type;
public:
    Car(int);
    void setProcess(int, int, int, int, int,int);
    void setType(int);
    int* getProcess(int);
};


#endif //TAREACORTA1_CAR_H
