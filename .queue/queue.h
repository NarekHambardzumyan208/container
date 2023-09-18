#include "List.h"
#include <iostream>
using namespace std;
template<class T>
class queue : private list<T> {
public:
	bool empty() {
		return this->empty_list();
	}
	void push_back(T m_value) {
		this->add(m_value);
	}
	void pop_front() {
		Node<T>* a = this->head;
		this->head = this->head->next;
		delete a;
	}
	T& back() {
		Node<T> * temp =this->head;
		while (temp != nullptr)
		{
			if (temp->next == nullptr)
			{
				return &temp;
			}
			temp = temp->next;
		}
	}
	T& front() {
		Node<T>* temp = this->head;
		return& temp;
	}
	
};