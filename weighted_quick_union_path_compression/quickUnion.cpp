/*
 * quickUnion.cpp
 *
 *      Author: leandro
 */

#include "quickUnion.h"

namespace _quickUnion
{

// constructor
quickUnion::quickUnion(int N) : id(new int[N]), size(N), cardinal(new int[N])
{
	for(int i = 0; i < N; ++i)
	{
		id[i] = i;
		cardinal[i] = i;
	}
}

// destructor
quickUnion::~quickUnion()
{
	delete [] id;

}

// copy constructor
quickUnion::quickUnion(const quickUnion &obj) : id(obj.id), size(obj.size), cardinal(obj.cardinal)
{
	//
}

// check if elements are connected
bool quickUnion::connected(int x, int y)
{
 return id[x] == id[y];
}

int quickUnion::qu_root(int i)
{
	while(i != id[i])
	{
		id[i] = id[id[i]]; // every node of the path of i is attached to the root
		i = id[i];
	}
	return i;
}


void quickUnion::qu_union(int x, int y)
{
	int i = qu_root(x);
	int j = qu_root(y);
	if(cardinal[i] > cardinal[j])
	{
		id[y] = i;
	    cardinal[i]++;
	} else {
		id[x] = j;
	    cardinal[j]++;
	}
}

int quickUnion::get_size() {
	return size;
}

int* quickUnion::get_id() {
	return id;
}

} /* namespace _quickUnion */

