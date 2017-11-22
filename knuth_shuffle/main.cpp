/*
 * main.cpp
 *
 *      Author: leandro
 */

#include <iostream>
#include "knuthShuffle.h"
using namespace _knuthShuffle;


int main()
{


	// test function ordering an array

    int myarray[] = {1, 2, 3, 4, 5, 6};
    knuthShuffle out(5, myarray);
    std::cout << "Sorted data" << std::endl;
    out.print_data();

    out.shuffle();
    std::cout << "Shuffled data" << std::endl;
    out.print_data();

	return 0;
}






