//
// Created by zenith on 9/3/2022.
//

#include "Switches.h"

std::string getDayOfWeek(int dayNum){
    std::string dayName;

    switch(dayNum) {
        case 0:
            dayName = "Sunday";
            break;              // Without these break statements every day of the week would be set to Saturday!!!!
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid day number specified";
    }

    return dayName;
}

void switches(){
    using namespace std;

    cout << "Day of the week 2 is " << getDayOfWeek(2) << endl;
    cout << "Day of the week 5 is " << getDayOfWeek(5) << endl;

}
