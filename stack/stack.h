/*
 * stack.h
 *
 *      Author: leandro
 */

#ifndef STACK_H_
#define STACK_H_

#include "node.h"
using namespace _node;

namespace _stack {

class stack
{
public:
	stack();
	virtual ~stack();
	int* get_node_data(int);
	void push(int, const int*);
	void pop(int);
	int get_n_elements();
private:
	node* head;
	int n_elements;
};

} /* namespace _stack */

#endif /* STACK_H_ */
