//
// Created by zenith on 9/4/2022.
//

#ifndef ADVANCEDCPP_INHERITANCES_H
#define ADVANCEDCPP_INHERITANCES_H


#include "Classes.h"

class Inheritances : public Classes{
public:
    Inheritances(int a, double c, string name, uint8_t d);

    void setA(int a) override;

    void setD(uint8_t d);
    uint8_t getD();

    uint8_t d{};
};


#endif //ADVANCEDCPP_INHERITANCES_H
