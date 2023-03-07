//
// Created by zenith on 9/4/2022.
//

#include "Classes.h"

#include <utility>

/**
 * Initialize the instance data
 * @param a an example integer data member
 * @param c an example double data member
 * @param name a name for the class
 */
Classes::Classes(int a, double c, string name) {
    this->a = a;
    this->c = c;
    this->name = move(name);
}

int Classes::getA() {
    return a;
}

double Classes::getC() {
    return c;
}

string Classes::getName() {
    return name;
}

void Classes::setA(int a) {
    this->a = a;
}

void Classes::setC(double c) {
    this->c = c;
}

void Classes::setName(string name) {
    this->name = name;
}
