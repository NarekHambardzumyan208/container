#include <iostream>
#include "Includes/vector.h"
#include "Includes/List.h"
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

