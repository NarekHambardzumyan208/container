#include <iostream>
#include "vector.h"
#include <set>
template<typename type>
void vector<type>::push_back(const type& num) {
	type* x = m_ptr;
	m_ptr = nullptr;
	++m_size;
	m_ptr = new type[m_capacity];
	for (int i = 0; i < m_size; i++)
	{
		m_ptr[i] = x[i];
	}
	m_capacity = m_size * 2;
	delete[] x;
	x = nullptr;
};
template<typename Type>
void vector<Type>::resize(size_t capacity)
{
	vector<Type>* temp = m_ptr;
	m_ptr = nullptr;
	m_ptr = new Type(capacity);
	m_capacity = capacity;
	for (int i = 0; i < m_size; i++)
	{
		m_ptr[i] = temp[i];
	}
	delete[] temp;
}
template<typename Type>
void vector<Type>::pop_back()
{
	Type* x = m_ptr;
	m_ptr = nullptr;
	--m_size;
	--m_capacity;
	m_ptr = new Type[m_capacity];
	for (int i = 0; i < m_size; ++i)
	{
		m_ptr[i] = x[i];
	}
	delete[] x;
	x = nullptr;
}
template<typename type>
type vector<type>::at(int num) {
	num = num > m_size ? 0 : num;
	return m_ptr[num];
}
template <typename type>
void vector<type>::print() {
	std::cout << std::endl;
	for (int i = 0; i < m_size; i++)
	{
		std::cout << m_ptr[i] << ",";
	}
	std::cout << std::endl;
}
template <typename type>
size_t vector<type>::capacity() {
	return m_capacity;
}
template<typename type>
void vector<type>::unique() 
{
	std::set<type> temp;
	for (int i = 0; i < m_size; i++)
	{
		temp.insert(at(i));
		pop_back();
	}
	for (int i = 0; i < m_size; i++)
	{
		push_back(temp[i]);
		temp.erase(i);
	}
}
template<typename type>
void vector<type>::insert(type var,int num) {
	type* x = m_ptr;
	m_ptr = nullptr;
	++m_size;
	m_capacity = m_size * 2;
	m_ptr = new type[m_capacity];
	for (int i = 0; i < m_size; i++)
	{
		if (i == num)
		{
			m_ptr[i] = var;
		}
		else {
			m_ptr[i] = x[i];
		}
	}
	delete[]  x;
	x = nullptr;
}
template<typename type>
type& vector<type>::operator[](size_t index) {
	return m_ptr[index];
}
template<typename type>
void vector<type>::reserve(int num)
{
	if (m_capacity < num)
	{
		m_capacity = num;
		vector<type> temp = m_ptr;
		m_ptr = nullptr;
		m_ptr = new type(m_capacity);
		for (int i = 0; i < m_size; i++)
		{
			m_ptr[i] = temp[i];
		}
	}
	else if (num > m_capacity && num > 0)
	{
		m_capacity = num;
		vector<type> temp = m_ptr;
		m_ptr = nullptr;
		m_ptr = new type(m_capacity);
		for (int i = 0; i < m_size; i++)
		{
			m_ptr[i] = temp[i];
		}
	}
	else if (num == 0)
	{
		delete[] m_ptr;
	}
	else {
		return;
	}
	
}