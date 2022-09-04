#include "Strings.h"
#include "Numbers.h"
#include "UserInputs.h"
#include "Arrays.h"
#include "Switches.h"
#include "Lists.h"
#include "Arrays2D.h"
#include "Pointers.h"
#include "Classes.h"
#include "Inheritances.h"

int main() {
    strings();
    number_s();
//    userInputs(); Annoying to input
    arrays();
    switches();
    lists();
    arrays2D();
    pointers();

    cout << "\nOBJECTS AND INHERITANCE\n";

    // Instantiate the Classes object
    Classes my_obj(3, 9.2, "Test Object");
    my_obj.setA(4);  // Use a set method
    cout << "C value for object: " << my_obj.getC() << endl; // Returns the c value (not printed)

    Inheritances inheritObj(3, 5, "Inherit object", 3);
    inheritObj.setA(5);
    cout << "Inherit A value: " << inheritObj.getA() << endl;

    return 0;
}
