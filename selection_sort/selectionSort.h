/*
 * selectionSort.h
 *
 *      Author: leandro
 */

#ifndef SELECTIONSORT_H_
#define SELECTIONSORT_H_

namespace _selectionSort {

class selectionSort {
public:
	selectionSort(int, int*);
	virtual ~selectionSort();
	void swap(int*, int*);
	void sort();
	int* find_min(int, int);
	bool is_ordered();
	void print_data();
private:
	int* data;
	int size;
};

} /* namespace _selectionSort */

#endif /* SELECTIONSORT_H_ */
