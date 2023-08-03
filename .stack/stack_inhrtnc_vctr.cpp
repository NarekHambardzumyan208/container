#include <iostream>
#include "C:\Users\User\source\repos\container\array\Array.cpp"
template<typename T>
class stack : Array<T> {
public:
	void top()
	{
		cout << this->at(this->m_size - 1);
	}
	void push(T num)
	{
		this->push_back(num);
	}
	void pop()
	{
		this->pop_back();
	}
};
int main(){
	stack<int> a;
	a.push(5);
	a.push(4);
	a.push(2);
	a.push(5);
	a.top();
}
