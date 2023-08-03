#include <iostream>
using namespace std;
#include "C:\Users\User\source\repos\container\.list\List.cpp"
template<typename T = int>
class stack : private list<T>
{
public:
  void push(T m_data)
  {
        this->add(m_data);
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
int main() {
	stack<int> a;
	a.push(5);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(5);
	a.top();
	a.empty();
}