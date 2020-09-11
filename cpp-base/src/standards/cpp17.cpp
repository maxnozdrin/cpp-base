#include "cpp17.h"
#include <algorithm>

namespace cpp17
{
	// std::size, std::data и std::empty
	void new_func()
	{
		int arr[] = { 1, 2, 3, 4, 5 };
		size_t size = std::size(arr);
		bool isEmpty = std::empty(arr);
		int* data = std::data(arr);
		;
	}


}