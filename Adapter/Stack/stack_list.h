#include <iostream>
using namespace std;
#include "C:\Users\User\source\repos\container\Sequence\List\List.h"
template<typename T = int>
class stack_list : private list<T>
{
public:
  void push(T m_data)
  {
        this->add(m_data);
  }
  void pop()
  {
	  Node<T> temp = this->head;
	  while (temp != nullptr)
	  {
		  if (temp->next == nullptr)
		  {
			  delete temp;
			  temp = nullptr;
		  }
	  }
  }
 bool empty()
 {
       return this->empty_list();
 }
 void top()
 {
	 Node<T>* temp =this->head;
	 while (temp != nullptr)
	 {
		 if (temp->next == nullptr)
		 {
			 cout << temp->m_value;
		 }
		 temp = temp->next;
	 }
 }
};