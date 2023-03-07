//
// Created by zenith on 9/4/2022.
//

#include "Pointers.h"

void pointers(){
    using namespace std;

    cout << "\nPOINTERS:\n" << endl;

    int age = 19;
    double gpa = 2.6;
    string name = "Mike";

    cout << "Address of age variable: " << &age << endl;

    int *pointerToAge = &age;  // Store the address of age inside of this int-type-pointer
    cout << "Dereferenced pointer: " << *pointerToAge << endl;



}
