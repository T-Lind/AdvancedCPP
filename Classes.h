//
// Created by zenith on 9/4/2022.
//

#include <iostream>

#ifndef ADVANCEDCPP_CLASSES_H
#define ADVANCEDCPP_CLASSES_H

using namespace std;
class Classes {
public:
    Classes(int a, double c, string name);

    int getA();
    double getC();
    string getName();

    virtual void setA(int a);
    void setC(double c);
    void setName(string name);

private:
    int a=0;
    double c=0;
    string name;
};


#endif //ADVANCEDCPP_CLASSES_H
