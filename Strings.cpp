//
// Created by zenith on 9/3/2022.
//

#include "Strings.h"

void strings() {
    using namespace std;

    cout << "\nSTRINGS:\n" << endl;

    string myString = "Hello nerds!";

    // Print the string itself
    cout << "Created a string: " << myString << endl;

    // Print the character at position 3
    cout << "Print the character at 3: " << myString[3] << endl;

    // C++ strings are MUTABLE - THIS IS LEGAL
    myString[6] = 't';

    // Print the length of the string
    cout << "Length: " << myString.length() << endl;

    // Find a substring or character inside the string and return the first index of it
    cout << "Find 'terd' in the string: " << myString.find("terd", 3) << endl;  // Second arg is where to start looking at

    // Perform a substring operation - first arg is the starting location, second is the LENGTH
    cout << "Substring from index 2 with length 3: " << myString.substr(2, 3) << endl;  // Prints 'llo'
}
