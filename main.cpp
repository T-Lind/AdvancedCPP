#include "Strings.h"
#include "Numbers.h"
#include "UserInputs.h"
#include "Arrays.h"
#include "Switches.h"
#include "Lists.h"
#include "Arrays2D.h"
#include "Pointers.h"
#include "Classes.h"

int main() {
    strings();
    number_s();
//    userInputs(); Annoying to input
    arrays();
    switches();
    lists();
    arrays2D();
    pointers();

    // Instantiate the Classes object
    Classes my_obj(3, 9.2, "Test Object");
    my_obj.setA(4);  // Use a set method
    my_obj.getC(); // Returns the c value (not printed)

    return 0;
}
