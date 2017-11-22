/*
 * knuthShuffle.h
 * For j in elements array,
 * Generate a random number for i in elements of array < j,
 * and swap pivot with the i element
 *
 *      Author: leandro
 */

#ifndef KNUTHSHUFFLE_H_
#define KNUTHSHUFFLE_H_

namespace _knuthShuffle {

class knuthShuffle {
public:
	knuthShuffle(int, int*);
	virtual ~knuthShuffle();
	void swap(int*, int*);
	void shuffle();
	void print_data();
private:
	int* data;
	int size;
};

} /* namespace _knuthShuffle */

#endif /* KNUTHSHUFFLE_H_ */
