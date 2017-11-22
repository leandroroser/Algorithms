/*
 * knuthShuffle.cpp
 *
 *      Author: leandro
 */

#include "knuthShuffle.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


namespace _knuthShuffle
{

knuthShuffle::knuthShuffle(int input_size, int* input) :
		data(new int[input_size]), size(input_size)
{
	for (int i = 0; i < input_size; ++i)
	{
		data[i] = input[i];
	}
}

knuthShuffle::~knuthShuffle()
{
	delete[] data;
}

void knuthShuffle::shuffle()
{
	std::srand(std::time(0));

	int i = 0;
		while (i < size)
		{
		   int random_int = std::rand() % (i+1);
		   swap(data + random_int, data + i);
		   i++;
		}
}

void knuthShuffle::swap(int* origin, int* destiny)
{
	int temp = *origin;
	*origin = *destiny;
	*destiny = temp;
}


void knuthShuffle::print_data()
{
	for (int j = 0; j < size; ++j)
	{
		std::cout << data[j] << "\t";
	}
	std::cout << std::endl;
}

} /* namespace _knuthShuffle */
