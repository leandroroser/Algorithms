/*
 * node.h
 *
 *  Created on: 21 nov. 2017
 *      Author: leandro
 */

#ifndef NODE_H_
#define NODE_H_

namespace _node {

class node {
public:
	node();
	node(int, const int*);
	virtual ~node();
	node* get_next_node();
	void set_link(node*);
	void set_data(int, const int*);
	int* get_data(int);
private:
	node* next_element;
	int* data;
};

} /* namespace _node */

#endif /* NODE_H_ */
