/*
 * main.cpp
 *
 *      Author: leandro
 */

#include <iostream>
#include "node.h"
#include "stack.h"
using namespace _node;
using namespace _stack;
using std::cout;
using std::endl;

int main() {

stack new_stack;

// create a linked list and add two elements

int x[] = {7,15,17,14,21};
int y[] = {1,2,3,4,5};
int z[] = {7,15,17,14,21, 31, 43};

// use push method
new_stack.push(5, x);
new_stack.push(5, y);
new_stack.push(7, z);

int* datos_1 = new_stack.get_node_data(0);
int* datos_2 = new_stack.get_node_data(1);

cout << "number of elements" << endl;
cout << new_stack.get_n_elements() << endl;
cout << endl;

cout << "The value of datos_1 is:" << endl;
for(int i = 0; i < 7; ++i)
{
	cout << datos_1[i] << endl;
}

cout << "The value of datos_2 is:" << endl;
for(int i = 0; i < 5; ++i)
{
	cout << datos_2[i] << endl;
}

// use pop method

cout << "number of elements before popping 2" << endl;
cout << new_stack.get_n_elements() << endl;
cout << endl;

new_stack.pop(2);


cout << "number of elements after popping" << endl;
cout << new_stack.get_n_elements() << endl;
cout << endl;

new_stack.pop(5); // error

return 0;
}


