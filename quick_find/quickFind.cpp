/*
 * quickFind.cpp
 *
 *      Author: leandro
 */

#include "quickFind.h"

namespace _quickFind
{

// constructor
quickFind::quickFind(int N) : id(new int[N]), size(N)
{
	for(int i = 0; i < N; ++i)
		id[i] = i;
}

// destructor
quickFind::~quickFind()
{
	delete [] id;
}

// copy constructor
quickFind::quickFind(const quickFind &obj): id(obj.id), size(obj.size)
{
	//
}

// check if elements are connected
bool quickFind::connected(int x, int y)
{
 return id[x] == id[y];
}


void quickFind::qf_union(int x, int y)
{
 if(id[x] != id[y])
 {
	 int y_id = id[y];
	 int x_id = id[x];
	 for(int i = 0; i <  size; ++i)
	 {
		 if(id[i] == y_id)
			 id[i] = x_id;
	 }
 }
}

int quickFind::get_size() {
	return size;
}

int* quickFind::get_id() {
	return id;
}

} /* namespace _quickFind */

