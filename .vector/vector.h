template<typename type = int>
class vector {
protected:
	type* m_ptr;
	size_t m_size = 2;
	size_t m_capacity = 4;
public:
	vector() {
		m_ptr = new type[m_capacity];
	}
	~vector() {
		delete[] m_ptr;
		m_ptr = nullptr;
	}
	type& operator[](size_t index);
	void push_back(const type& num);
	void pop_back();
	type at(int num);
	size_t capacity();
	void insert(type var, int num);
	void reserve(int num);
	void print();
	void unique();
    size_t size();
};
