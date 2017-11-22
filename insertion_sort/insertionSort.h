/*
 * insertionSort.h
 *
 *      Author: leandro
 */

#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_

namespace _insertionSort {

class insertionSort {
public:
	insertionSort(int, int*);
	virtual ~insertionSort();
	void swap(int*, int*);
	void sort();
	bool is_ordered();
	void print_data();
private:
	int* data;
	int size;
};

} /* namespace _insertionSort */

#endif /* INSERTIONSORT_H_ */
