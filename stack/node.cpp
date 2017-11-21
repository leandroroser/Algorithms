/*
 * node.cpp
 *
 *  Created on: 21 nov. 2017
 *      Author: leandro
 */

#include "node.h"

namespace _node {

node::node() :
		next_element(nullptr), data(nullptr) {
	//
}

node::node(int size, const int* input) :
		next_element(nullptr), data(new int[size]) {
	for (int i = 0; i < size; ++i) {
		data[i] = input[i];
	}
}

node::~node() {
	delete[] data;
}

node* node::get_next_node() {
	return next_element;
}

void node::set_data(int size, const int* input) {
	data = new int[size];
	for (int i = 0; i < size; ++i) {
		data[i] = input[i];
	}
}

void node::set_link(node* to) {
	next_element = to;
}

int* node::get_data(int index) {
	int i = 0;
	node* where = this;
	while (i != index)
	{
		where = this->get_next_node();
		i++;
	}

	return where->data;
}

} /* namespace _node */
