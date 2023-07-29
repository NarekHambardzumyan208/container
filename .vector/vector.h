template<typename Type>
class vector {
	Type* m_ptr;
	size_t m_size = 2;
	size_t m_capacity = 4;
public:
	vector() {
		m_ptr = new Type[m_capacity];
	}
	~vector() {
		delete[] m_ptr;
		m_ptr = nullptr;
	}
	void push_back(const Type& num);
	void pop_back();
	Type at(int num);
	size_t capacity();
	void insert(Type var,int num);
	void reserve(int num);
	void erase(int num);
	void print();
};