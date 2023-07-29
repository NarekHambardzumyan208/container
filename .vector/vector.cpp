#include <iostream>
#include "vector.h"
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
template<typename type>
void vector<type>::pop_back() {
	type* x = m_ptr;
	m_ptr = nullptr;
	--m_size;
	--m_capacity;
	m_ptr = new type[m_capacity];
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
void print() {
	cout << std::endl;
	for (int i = 0; i < m_size; i++)
	{
		cout << m_ptr[i] << ",";
	}
	cout << std::endl;
}
template <typename type>
size_t vector<type>::capacity() {
	return m_capacity;
}
template<typename type>
void vector<type>::reserve(int num)
{
	num = num > 600 ? 300 : num;
	m_capacity = num;
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