//
// Created by andie on 18.10.2020.
//
#include <iostream>
#include <string>
#ifndef LESSON2_ASKER_H
#define LESSON2_ASKER_H

enum Questions {
    SUM=1,
    DIF=2,
    DIV=3,
    MULT=4

};


class Service {
public:
    Asker();

    void askAboutValues(double & x , double & y);
    void askAboutAction();
    void checkZeroValue(double & value);
};

#endif //LESSON2_ASKER_H
