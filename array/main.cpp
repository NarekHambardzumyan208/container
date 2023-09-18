#include "Array.h"
#include <iostream>
int main()
{
	  /*  Array<int> first;
	   *      first.gen_elements();
	   *          first.display();
	   *              Array<int> second(std::move(Array<int>()));
	   *                  Array<int> third;
	   *                      third = std::move(Array<int>());
	   *                          Array<float> Fourth;
	   *                              std::cout << first.at(5);
	   *                                  std::cout << std::endl;*/
	    Array<int> first;
	        first.gen_elements();
		    first.push_back(1);
		        first.push_back(3);
			    first.display();
			        first.pop_back();
				    first.display();
}

