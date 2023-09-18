#include <iostream>
#include "stack_array.h"
#include "stack_list.h"
int main() {
	stack_list<int> a;
	a.push(5);
	a.push(6);
	a.push(7);
	a.push(8);
	a.push(5);
	a.top();
	a.empty();
	
		stack_array<int> a;
		a.push(5);
		a.push(4);
		a.push(2);
		a.push(5);
		a.top();
	
}