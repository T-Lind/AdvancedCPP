//
// Created by zenith on 9/3/2022.
//

#include "Lists.h"

void printIntList(std::list<int> my_list){
    using namespace std;

    list <int>::iterator iter;
    for(iter = my_list.begin(); iter != my_list.end(); iter++)
        cout<< *iter  <<' ';
    cout << endl;
}

void lists(){
    using namespace std;

    // Create a list with data in iter
    list<int> my_list = {1, -2, 3, 4};

    my_list.push_back(5);  // push_back adds it to the END!
    my_list.push_front(0);  // push_front adds it to the FRONT!
    cout << "List with added elements: ";
    printIntList(my_list);

    // Sort the list
    my_list.sort();
    cout << "Sorted list: ";
    printIntList(my_list);

    // Remove items from the list - can only from front or back (also can't get a specific item)
    my_list.pop_back();  // Remove from the end
    my_list.pop_back();  // Remove from the end
    cout << "List with two elements removed: ";
    printIntList(my_list);

    // Find the length of the list
    cout << "List length: " << my_list.size() << endl;
}