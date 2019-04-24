//
// Created by jondorito on 23/04/19.
//

#ifndef TAREACORTA1_TIMER_H
#define TAREACORTA1_TIMER_H


#include <iostream>
#include <time.h>	// class needs this inclusion


//////////////////////////////////////////
// class declaration:


class timer {
public:
    timer();
    void           start();
    void           stop();
    void           reset();
    bool           isRunning();
    unsigned long  getTime();
    bool           isOver(unsigned long seconds);
private:
    bool           resetted;
    bool           running;
    unsigned long  beg;
    unsigned long  end;
};


#endif //TAREACORTA1_TIMER_H
