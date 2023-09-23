#include <iostream>
#include <queue>
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
    void reverse() {
        Node<T>* prev = nullptr;
        Node<T>* current = head;
        Node<T>* nextNode = nullptr;

        while (current != nullptr) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        head = prev;
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
    while (temp != nullptr)
    {
        Node<T>* nextt = temp->next;
        delete temp;
        temp = nextt;
    }
    head = nullptr; 
  }
  bool has_cycle() {
      Node<T>* slow = head;
      Node<T>* fast = head;
      while (slow != nullptr && fast != nullptr && fast->next != nullptr)
      {
          slow = slow->next;
          fast = fast->next->next;
          if (slow == fast)
          {
              return 1;
          }
      }
      return 0;
  }
  T nrd_elem(size_t n) {
      reverse();
      Node <T>* temp = head;
      for (int i = 0; i <= n; i++)
      {
          if (i == n && temp != nullptr)
          {
              return temp->m_value;
          }
          temp = temp->next;
      }
      return 0;
  }
};
