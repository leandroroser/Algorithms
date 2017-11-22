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
	void sort();
	int* find_min(int, int);
	void print_data();
private:
	int* data;
	int size;
};

} /* namespace _selectionSort */

#endif /* SELECTIONSORT_H_ */
