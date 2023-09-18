#include "Hashtable.h"
#include <iostream>
int main() {
    HashTable<int, int> hashTable;

    hashTable.insert(4, 1);
    hashTable.insert(3, 2);
    hashTable.insert(2, 3);
    hashTable.insert(1, 4);

    int value;
    if (hashTable.find(2, value)) {
        std::cout << "Value of key 'two': " << value << std::endl;
    }
    else {
        std::cout << "Key 'two' not found." << std::endl;
    }

    return 0;
}