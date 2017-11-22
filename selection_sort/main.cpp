/*
 * main.cpp
 *
 *      Author: leandro
 */

#include <iostream>
#include "selectionSort.h"
using namespace _selectionSort;

void sort(int*, int);
int* find_min(int*, int, int);

int main()
{

	// test function ordering an array

    int myarray[] = {2, 53, 36, 7, 56, 4};
    selectionSort out(5, myarray);
    std::cout << "Unordered data" << std::endl;
    out.print_data();
    std::cout << "Is ordered?" << std::endl;
    std::cout << out.is_ordered() << std::endl;

    out.sort();
    std::cout << "Ordered data" << std::endl;
    out.print_data();

    std::cout << "Is ordered?" << std::endl;
    std::cout << out.is_ordered() << std::endl;

	return 0;
}






