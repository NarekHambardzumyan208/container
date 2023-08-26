#include <iostream>
#pragma once
#ifndef MY_EXCEPTION
#define MY_EXCEPTION
class exception : public std::exception {
private:
	const char* err = new char[50];
public:
	exception() noexcept
	{
		err = "undefined_behavior";
	}
	exception(const char* err) : err(err) {};
	exception(const exception& other) noexcept
	{
		delete[] err;
		err = other.err;
	}
	void operator=(const exception& other) noexcept
	{
		if (this != &other)
		{
			delete[] err;
			err = other.err;
		}
	}
	virtual ~exception()
	{
		delete[] err;
	}
	virtual const char* what() const noexcept
	{
		return err;
	}

};
#endif