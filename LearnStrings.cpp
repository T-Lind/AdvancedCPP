//
// Created by zenith on 9/3/2022.
//

#include "LearnStrings.h"

void stringWork() {
    using namespace std;
    string myString = "Hello nerds!";

    // Print the string itself
    cout << myString << endl;

    // Print the character at position 3
    cout << myString[3] << endl;

    // C++ strings are MUTABLE - THIS IS LEGAL
    myString[6] = 't';

    // Print the length of the string
    cout << myString.length() << endl;

    // Find a substring or character inside the string and return the first index of it
    cout << myString.find("terd", 3) << endl;  // Second arg is where to start looking at

    // Perform a substring operation - first arg is the starting location, second is the LENGTH
    cout << myString.substr(2, 3) << endl;  // Prints 'llo'
}
