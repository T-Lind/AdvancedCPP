//
// Created by zenith on 9/4/2022.
//

#include "Inheritances.h"

#include <utility>

Inheritances::Inheritances(int a, double c, string name, uint8_t d) : Classes(a, c, std::move(name)) {
    this->d = d;
}

void Inheritances::setA(int a) {
    Classes::setA(2*a);
}

void Inheritances::setD(uint8_t d) {
    this->d = d;
}

uint8_t Inheritances::getD() {
    return d;
}
