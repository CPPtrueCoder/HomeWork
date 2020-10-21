//
// Created by andie on 18.10.2020.
//

#include "Calculator.h"
Calculator::Calculator() {
 value1=0;
 value2=0;
 service = new Service();
 service->askAboutValues(this->value1,this->value2);
 std::cout<<this->value1<<this->value2;
}

void Calculator::showAnswer(double answer) {
std::cout<<answer;
}

auto Calculator::sum(double a,double b) {
    return a+b;
}

auto Calculator::multiply(double a, double b) {
    return a * b;
}

auto Calculator::dividion(double a, double b) {
    return a/b;
}

auto Calculator::difference(double a, double b) {
    return a-b;
}

