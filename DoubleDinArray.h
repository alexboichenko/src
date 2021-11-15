#ifndef __DOUBLEDINARRAY_H__
#define __DOUBLEDINARRAY_H__
#include "DoubleData.h"

class DoubleDinArray : public DoubleData
{
private:
	DoubleData* din_array;
	int size_array;
public:
	DoubleDinArray(int size);
	~DoubleDinArray();
	void set_data();
	void print();
};

#endif