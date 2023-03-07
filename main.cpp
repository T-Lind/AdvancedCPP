#include "fundamentals/Strings.h"
#include "fundamentals/Numbers.h"
#include "fundamentals/UserInputs.h"
#include "fundamentals/Arrays.h"
#include "fundamentals/Switches.h"
#include "fundamentals/Lists.h"
#include "fundamentals/Arrays2D.h"
#include "fundamentals/Pointers.h"
#include "fundamentals/Classes.h"
#include "fundamentals/Inheritances.h"
#include "datastructures/Hashmap.h"

int main() {
    auto map = Hashmap<int>(10, [&] (int input) -> int{return input % 10;});
    map.add(14);
    cout << map.toString() << endl;

//    strings();
//    number_s();
////    userInputs(); Annoying to input
//    arrays();
//    switches();
//    lists();
//    arrays2D();
//    pointers();
//
//    cout << "\nOBJECTS AND INHERITANCE\n";
//
//    // Instantiate the Classes object
//    Classes my_obj(3, 9.2, "Test Object");
//    my_obj.setA(4);  // Use a set method
//    cout << "C value for object: " << my_obj.getC() << endl; // Returns the c value (not printed)
//
//    Inheritances inheritObj(3, 5, "Inherit object", 3);
//    inheritObj.setA(5);
//    cout << "Inherit A value: " << inheritObj.getA() << endl;

    return 0;
}
