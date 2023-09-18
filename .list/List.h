#include <iostream>
using namespace std;
template<class T = int>
struct Node {
	Node* previous;
	Node* next;
	T m_value;
	Node() : previous(nullptr), next(nullptr), m_value(0) {};
	Node(T data) : previous(nullptr),next(nullptr), m_value(data) {}
};
template<class T = int>
class list {
protected:
	Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
public:
    void add(T m_data) {
        Node<T>* newNode = new Node<T>(m_data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->previous = tail;
            tail = newNode;
        }
    }

    void print() {
        Node<T>* temp = head;
        while (temp != nullptr) {
            std::cout << temp->m_value << std::endl;
            temp = temp->next;
        }
    }
    bool empty_list()
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
            Node<T>* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};