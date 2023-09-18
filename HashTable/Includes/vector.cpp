#include <iostream>
#include "vector.h"
#include "C:\Users\User\source\repos\container\exception\exception_class.h"
#include <set>
template<typename T>
size_t vector<T>::size()
{
	return size;
}
template<typename T>
bool Iterator<T>::operator==(const Iterator& obj) {
	return m_ptr == obj.m_ptr;
}
template<typename T>
bool Iterator<T>::operator!=(const Iterator& obj)
{
	return m_ptr != obj.m_ptr;
}
template<typename T>
T& Iterator<T>::operator*()
{
	return *m_ptr;
}
template<typename T>
T* Iterator<T>::operator->()
{
	return m_ptr;
}
template<typename T>
Iterator<T> Iterator<T>::operator++(int)
{
	++m_ptr;
	return *this;
}
template<typename T>
Iterator<T>& Iterator<T>::operator++()
{
	Iterator<T> oldIterator = *this;
	++m_ptr;
	return oldIterator;
}
template<typename T>
void vector<T>::push_back(const T& obj) {
	if (m_size == m_capacity) {
		if (m_capacity == 0)
			m_capacity = 1;
		else
			m_capacity = 2 * m_capacity;

		T* temp = new T[m_capacity];
		for (int i = 0; i < m_size; i++) {
			temp[i] = m_ptr[i];
		}
		delete[] m_ptr;
		m_ptr = temp;
	}

	m_ptr[m_size] = obj;
	m_size++;
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
	if (num > m_size || num < 0)
	{
	throw exception("out_of_range");
	}
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
template <typename type>
Iterator<type> begin()
{
	Iterator temp(&m_ptr[0]);
	return temp;
}
template <typename type>
Iterator<type> end()
{
	Iterator temp(&m_ptr[m_size - 1]);
	return &m_ptr[m_size - 1];
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
