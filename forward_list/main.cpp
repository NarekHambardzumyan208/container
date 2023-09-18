#include <iostream>
#include "Forward_List.h"
int main() {
    list<int> first;
    first.add(1);
    first.add(3);
    first.add(4);
    first.add(7);
    first.add(6);
    first.add(8);
    //first.print();
    std::cout << first.nrd_elem(2) << std::endl;
    /*first.print();
    std::cout << first.has_cycle();*/
    //first.print();
    //first.clear();
    //first.print();

    return 0;
}