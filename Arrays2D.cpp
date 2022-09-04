//
// Created by zenith on 9/4/2022.
//

#include "Arrays2D.h"

void arrays2D(){
    using namespace std;

    cout << "\n2D ARRAYS:\n" << endl;

    // Create a 2d array of 3 rows and 2 columns
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    cout << "r=1, c=2 in the array is " << numberGrid[1][2] << endl;

    for(char r=0;r<3;r++){
        for(char c=0;c<2;c++)
            cout << numberGrid[r][c] << " ";
        cout << endl;
    }

}
