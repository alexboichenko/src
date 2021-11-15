#ifndef __INTDINARRAY_H__
#define __INTDINARRAY_H__
#include "IntData.h"

class IntDinArray : public IntData
{
private:
	IntData* din_array;
	int size_array;
public:
	IntDinArray(int size);
	~IntDinArray();
	void set_data();
	void print();
};

#endif