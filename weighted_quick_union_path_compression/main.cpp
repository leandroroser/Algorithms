/*
 * main.cpp
 *
 *      Author: leandro
 */

#include <iostream>
#include "quickUnion.h"
using namespace _quickUnion;
using std::cout;
using std::endl;

int main()
{
	/* Sample code for the function.
	 Create a vector with 12 elements and
	 generate the following groups:
	 {1, 3, 5}, {6, 8, 10, 11}, {2,4} */

	quickUnion x(12);

	cout <<  "Groups {1, 3, 5}, {6, 8, 10, 11}, {2,4}\n" << endl;

	x.qu_union(1, 3);
	x.qu_union(3,5);
	x.qu_union(6, 8);
	x.qu_union(8, 10);
	x.qu_union(10, 11);
	x.qu_union(2, 4);

	cout << "Vector of connected elements: " << endl;

	int *my_id = x.get_id();
	for(int i = 0; i < x.get_size(); ++i)
		cout << my_id[i] << " ";

	return 0;
}


