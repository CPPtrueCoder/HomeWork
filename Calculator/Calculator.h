//
// Created by andie on 18.10.2020.
//

#ifndef LESSON2_CALCULATOR_H
#define LESSON2_CALCULATOR_H
#include "../Service/Service.h"

class Calculator {
public:
    Calculator();
    void showAnswer (double answer);
    auto sum (double a,double b);
    auto multiply(double a, double b);
    auto dividion(double a, double b);
    auto difference(double a, double b);

private:
    Service * service;
    double value1,value2;


};


#endif //LESSON2_CALCULATOR_H
