#include <iostream>

template<typename T = int>
class Node {
public:
    Node* next;
    T m_value;
    Node() : next(nullptr), m_value(0) {};
    Node(T data) : next(nullptr), m_value(data) {}
};

template<typename T = int>
class list {
    Node<T>* head = nullptr;
public:
    void add(T m_data) {
        Node<T>* newNode = new Node<T>(m_data);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node<T>* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void print() {
        Node<T>* temp = head;
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
    void clear()
    {
        Node<T>* temp = head;
        while (temp->next != nullptr)
        {
            Node<T>* nextt = temp->next;
            delete temp;
            temp = nextt;
        }
    }
};

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