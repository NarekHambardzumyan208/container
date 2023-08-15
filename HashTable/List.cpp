#include <iostream>
#include <queue>
template<typename T = int,typename KeyType = int>
class list {
    struct Node {
        KeyType key;
        Node* next;
        T m_value;
        Node() : next(nullptr), m_value(0) {};
        Node(const KeyType& k, const T& v) : key(k), m_value(v), next(nullptr) {}
    };
    Node* head = nullptr;
public:
    void insert(const KeyType& key, const T& value) {
        Node* newNode = new Node(key, value);
        newNode->next = head;
        head = newNode;
    }
    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->m_value << std::endl;
            temp = temp->next;
        }
    }
    bool empty()
    {
        if (head == nullptr)
        {
            return 1;
        }
        else {
            return 0;
        }
    }
    bool find(const KeyType& key, T& value) const {
        Node* current = head;
        while (current) {
            if (current->key == key) {
                value = current->m_value;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void clear()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            Node* nextt = temp->next;
            delete temp;
            temp = nextt;
        }
        head = nullptr;
    }
    
};
