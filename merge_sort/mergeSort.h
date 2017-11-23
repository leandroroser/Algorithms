/*
 * mergeSort.h
 *
 *      Author: leandro
 */

#ifndef MERGESORT_H_
#define MERGESORT_H_

namespace _mergeSort {

class mergeSort {
public:
	mergeSort(int, int*);
	virtual ~mergeSort();
	void swap(int*, int*);
	void sort();
	bool is_ordered();
	void print_data();
private:
	int* data;
	int size;
};

} /* namespace _mergeSort */

#endif /* MERGESORT_H_ */
