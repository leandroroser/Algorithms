/*
 * mergeSort.cpp
 *
 *      Author: leandro
 */

#include "mergeSort.h"

#include <iostream>

namespace _mergeSort
{

mergeSort::mergeSort(int input_size, int* input) :
		data(new int[input_size]), size(input_size)
{
	for (int i = 0; i < input_size; ++i)
	{
		data[i] = input[i];
	}
}

mergeSort::~mergeSort()
{
	delete[] data;
}

void mergeSort::sort()
{
	// divide array in 2 parts


	int i = 1;
		while (i < size)
		{
			for (int j = i; j > 0; --j)
			{
				if (data[j] < data[j - 1])
				{
					// the idea is to swap elements for sorting,
					// starting from pivot to 0
					swap(data + j, data + j - 1);
				} else break;
			}
			i++;
		}
}

void mergeSort::swap(int* origin, int* destiny)
{
	int temp = *origin;
	*origin = *destiny;
	*destiny = temp;
}

bool mergeSort::is_ordered()
{
	bool out = true;

	for (int j = 1; j < size; ++j)
	{
		if (data[j] < data[j - 1])
		{
			out = false;
			break;
		}
	}
	return out;
}

void mergeSort::print_data()
{
	for (int j = 0; j < size; ++j)
	{
		std::cout << data[j] << "\t";
	}
	std::cout << std::endl;
}

} /* namespace _mergeSort */
