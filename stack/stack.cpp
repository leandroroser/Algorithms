/*
 * stack.cpp
 *
 *      Author: leandro
 */

#include "stack.h"
#include <iostream>

namespace _stack {

stack::stack(): head(new node), n_elements(0)
{
 //
}

stack::~stack() {
	node* next;

	for(int i = 0; i < n_elements; ++i)
	{
		next = head->get_next_node();
		delete head;
		head = next;
	}
}


int* stack::get_node_data(int index)
{
	return head->get_data(index);
}


void stack::push(int size, const int* elements)
{
 if(n_elements == 0)
 {
   head->set_data(size, elements);
 }

 else
 {
	 node* prev_head = head;
	 node* new_head = new node(size, elements);
	 new_head-> set_link(prev_head);
	 head = new_head;
 }

 n_elements++;

}

void stack::pop(int size)
{
  try{
	 if(size > n_elements)
	 {
		 throw -1;
	 }

	 if(n_elements == 0 && size > 0)
	  {
	 	 throw -2;
	  }
   } catch(int i) {
	   if(i == -1)
	   {
	   std::cout << "invalid argument passed to pop, size > n_elements" << std::endl;
	   }
	   if(i == -2)
	   {
	    std::cout << "invalid argument passed to pop, n_elements = 0" << std::endl;
	   }
  }


 int i = 0;
 while(i < size)
 {
	 node* prev_head = head;
	 node* new_head  = head->get_next_node();
	 head = new_head;
	 delete prev_head;
	 i++;
	 n_elements--;
 }
}


int stack::get_n_elements()
{
	return n_elements;
}

}  /* namespace _stack */


