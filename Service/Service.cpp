//
// Created by andie on 18.10.2020.
//

#include "Service.h"



void Service::askAboutValues(double & x , double & y) {
    double value1, value2;
    std:: cout<<"Get to values for calculate: ";
    std::cin>>value1>>value2;
    x= value1;
    y=value2;
}

void Service::askAboutAction() {
    std::string answer;
    std::cout<<"What' do you want to do?";
    std::cin>>answer;
}

void Service::checkZeroValue( double & value) {
    if (value==0){
        std::cout<<"Value is Zero";
    }
    else {
        std::cout<<"Okay go next";
    }
}
