//
// Created by zenith on 9/3/2022.
//

#include "UserInputs.h"

void userInputs(){
    using namespace std;
    cout << "\nUSER INPUT:\n" << endl;

    string color, pluralNoun, celebrity;

    cout << "Enter a celebrity: ";
    getline(cin, celebrity);
    cin.clear();
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << celebrity << " ran away with " << color << " " << pluralNoun << endl;
}
