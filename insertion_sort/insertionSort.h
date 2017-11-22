/*
 * insertionSort.h
 *
 *      Author: leandro
 */

#ifndef SELECTIONSORT_H_
#define SELECTIONSORT_H_

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

#endif /* SELECTIONSORT_H_ */
