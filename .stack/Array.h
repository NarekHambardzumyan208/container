#include <iostream>
#include <vector>
using namespace std;
template<typename Type>
class Array
{
protected:
    Type* m_ptr = nullptr;
    size_t m_size=0;
public:
    Array() {
        std::cout << "Input the size of vector\n";
        getsize();
        m_ptr = new Type[m_size];
        std::cout << "The array was created\n";
    }
    void getsize() 
    {
        while (m_size <= 0)
        {
            cin >> m_size;
        }
    }
    Array(Array&& obj) : m_size(obj.m_size), m_ptr(obj.m_ptr) {
        obj.m_size = 0;
        obj.m_ptr = nullptr;
    }
    Array& operator=(Array&& obj) {
        if (this != &obj)
        {
            delete[] m_ptr;
            m_ptr = obj.m_ptr;
            m_size = obj.m_size;
            obj.m_ptr = nullptr;
            obj.m_size = 0;
        }
        return *this;
    }
    Array(const Array& other)
    {
        m_size = other.m_size;
        m_ptr = new Type[m_size];
        for (int i = 0; i < other.m_size; i++)
        {
            m_ptr[i] = other.m_ptr[i];
        }
    }
    Array& operator=(const Array& other)
    {
        if (this != &other) {
            delete[] m_ptr;
            m_ptr = nullptr;
            m_ptr = new Type[other.m_size];
            m_size = other.m_size;
            for (int i = 0; i < other.m_size; i++)
            {
                m_ptr[i] = other.m_ptr[i];
            }
        }
        return *this;
    }
    void gen_elements()
    {
        for (int i = 0; i < m_size; i++)
        {
            m_ptr[i] = rand();
        }
    }
    void display()
    {
        for (int i = 0; i < m_size; i++)
        {
            std::cout << m_ptr[i] << ",";
        }
        std::cout << std::endl;
    }
    Type at(int num) {
        if (num < m_size)
        {
            return m_ptr[num];
        }
        return m_ptr[m_size];
    }
    void push_back(int num)
    {
        Type* x = m_ptr;
        m_ptr = nullptr;
        ++m_size;
        m_ptr = new Type[m_size];
        for (int i = 0; i < m_size; i++)
        {
            if (i == m_size - 1)
            {
                m_ptr[i] = num;
                break;
            }
            m_ptr[i] = x[i];
        }
        delete[] x;
        x = nullptr;
    }
    void pop_back() {
        Type* x = m_ptr;
        m_ptr = nullptr;
        --m_size;
        m_ptr = new Type[m_size];
        for (int i = 0; i < m_size; i++)
        {
            m_ptr[i] = x[i];
        }
        delete[] x;
        x = nullptr;
    }
    ~Array()
    {
        std::cout << "The destructor was called\n";
        delete[] m_ptr;
        m_ptr = nullptr;
        std::cout << "The array was deleted\n";
    }
};
