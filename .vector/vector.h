#include <cstddef>
template<typename T>
class Iterator {
public:
	using pointer = T*;
	using value_type = T;
	using reference = T&;
	reference operator*();
	pointer operator ->();
	Iterator<T>& operator++();
	Iterator<T> operator++(int);
	bool operator !=(const Iterator& obj);
	bool operator == (const Iterator& obj);
	Iterator(pointer ptr) : m_ptr(ptr) {};
private:
	pointer m_ptr;
};
template<typename type = int>
class vector {
protected:
	type* m_ptr;
	size_t m_size = 0;
	size_t m_capacity = 0;
public:
	vector() {
		m_ptr = new type[m_capacity];
	}
	~vector() {
		delete[] m_ptr;
		m_ptr = nullptr;
	}
	type& operator[](size_t index);
	Iterator<type> begin();
	Iterator<type> end();
	void push_back(const type& num);
	void pop_back();
	type at(int num);
	size_t capacity();
	void insert(type var, int num);
	void reserve(int num);
	void print();
	void unique();
    size_t size();
	void resize(size_t capacity);
};
