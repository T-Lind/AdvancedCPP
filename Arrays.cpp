//
// Created by zenith on 9/3/2022.
//

#include "Arrays.h"

void arrays(){
    using namespace std;

    cout << "\nARRAYS:\n" << endl;


    // Create an array with predefined data
    int luckyNums[] = {3, 7, 11, 12};

    cout << "Item 0:" << luckyNums[0] << endl;

    for(auto item : luckyNums){
        cout << item << " ";
    }

    cout << endl;

    // Arrays aren't exactly static - using the for-each loop like the one above results in only the original numbers
    // being printed, but assigning index 4 - which is past the end of the array - I can use a for loop to access it!
    luckyNums[4] = 69;

    // This works same as Java
    luckyNums[0] = 10;

    for(int i=0;i<5;i++){
        cout << luckyNums[i] << " ";
    }
}