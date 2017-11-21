/*
 * binarysearch.h
 *
 *      Author: leandro
 */

#ifndef BINARYSEARCH_H_
#define BINARYSEARCH_H_

namespace general
{

class binary_search
{
public:
	binary_search(int N);
	virtual ~binary_search();
	void search(int x);
	int get_size();
	int* get_id();
private:
	int *key;
	int *value;
	int size;
};

} /* namespace general */

#endif /* BINARYSEARCH_H_ */
