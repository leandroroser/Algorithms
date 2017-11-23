/*
 * main.cpp
 *
 *      Author: leandro
 */

#include <iostream>

#include "mergeSort.h"
using namespace _mergeSort;

void sort(int*, int);
int* find_min(int*, int, int);

int main()
{

	// test function ordering an array

    int myarray[] = {2, 53, 36, 7, 56, 4};
    mergeSort out(5, myarray);
    std::cout << "Unsorted data" << std::endl;
    out.print_data();
    std::cout << "Is sorted?" << std::endl;
    std::cout << out.is_ordered() << std::endl;

    out.sort();
    std::cout << "Sorted data" << std::endl;
    out.print_data();

    std::cout << "Is sorted?" << std::endl;
    std::cout << out.is_ordered() << std::endl;

	return 0;
}






