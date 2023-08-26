#include "vector.cpp"
#include <iostream>
int main()
{
	try
	{
		vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		vec.push_back(6);
		vec.push_back(7);
		vec.print();
		std::cout << vec.at(11);
	}
	catch (char const* err)
	{
		std::cout << err;
	}

}