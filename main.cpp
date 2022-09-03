#include <iostream>
#include <cmath>

void stringWork() {
    using namespace std;
    string myString = "Hello nerds!";

    // Print the string itself
    cout << myString << endl;

    // Print the character at position 3
    cout << myString[3] << endl;

    // Print the length of the string
    cout << myString.length() << endl;

    // Find a substring or character inside the string and return the first index of it
    cout << myString.find("nerd", 3) << endl;  // Second arg is where to start looking at

    // Perform a substring operation - first arg is the starting location, second is the LENGTH
    cout << myString.substr(2, 3) << endl;  // Prints 'llo'
}


int main() {
    using namespace std;
    string myString = "Hello nerds!";
    myString[6] = 't';

    cout << myString << endl;
    cout << myString.substr(2, 3) << endl;

    cout << fmax(10.2, 3.3);

    return 0;
}
