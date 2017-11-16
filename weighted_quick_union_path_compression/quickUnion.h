/*
 * quickFind.h
 *
 *  Created on: 15 nov. 2017
 *      Author: leandro
 */

#ifndef QUICKUNION_H_
#define QUICKUNION_H_

namespace _quickUnion
{

class quickUnion
{
public:
	quickUnion(int N);
	virtual ~quickUnion();
	quickUnion(const quickUnion &obj);
	bool connected(int x, int y);
	int qu_root(int i);
	void qu_union(int x, int y);
	int get_size();
	int* get_id();
private:
	int *id;
	int size;
	int *cardinal;
};

} /* namespace _quickUnion */

#endif /* QUICKUNION_H_ */
