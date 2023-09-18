#include <iostream>
#pragma once
#ifndef MY_EXCEPTION
#define MY_EXCEPTION
class exception : public std::exception {
private:
	const char* err;
public:
	exception() noexcept
	{
		err = new char[50];
		err = "undefined_behavior";
	}
	exception(const char* err)
	{
		this.err = new char[50];
		this.err = err;
	};
	exception(const exception& other) noexcept
	{
		err = other.err;
	}
	void operator=(const exception& other) noexcept
	{
		if (this != &other)
		{
			err = other.err;
		}
	}
	virtual ~exception()
	{
		delete[] err;
		err = nullptr;
	}
	virtual const char* what() const noexcept
	{
		return err;
	}

};
#endif