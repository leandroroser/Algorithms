/*
 * quickFind.h
 *
 *  Created on: 15 nov. 2017
 *      Author: leandro
 */

#ifndef QUICKFIND_H_
#define QUICKFIND_H_

namespace _quickFind
{

class quickFind
{
public:
	quickFind(int N);
	virtual ~quickFind();
	bool connected(int x, int y);
	void qf_union(int x, int y);
	quickFind(const quickFind &obj);
	int get_size();
	int* get_id();
private:
	int *id;
	int size;
};

} /* namespace _quickFind */

#endif /* QUICKFIND_H_ */
