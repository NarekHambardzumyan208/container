#include <iostream>
#include "C:\Users\User\source\repos\container\.vector\vector.cpp"
#include "List.cpp"
template <typename KeyType, typename ValueType>
class HashTable {
private:
    vector<list<KeyType, ValueType>> buckets;
    size_t capacity;

    size_t hashFunction(const KeyType& key) const {
        return std::hash<KeyType>{}(key) % capacity;
    }

public:
    HashTable() {};
    HashTable(size_t defcap) : capacity(defcap) {
        buckets.resize(capacity);
    }

    void insert(const KeyType& key, const ValueType& value) {
        size_t index = hashFunction(key);
        buckets[index].insert(key, value);
    }

    bool find(const KeyType& key, ValueType& value) const {
        size_t index = hashFunction(key);
        return buckets[index].find(key, value);
    }
};

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