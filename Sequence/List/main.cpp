#include "List.h"
int main() {
    list<int> first;
    first.add(1);
    first.add(3);
    first.add(4);
    first.add(7);
    first.print();
    first.clear();
    first.print();

    return 0;
}
