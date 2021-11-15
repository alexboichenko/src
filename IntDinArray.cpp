#include "IntDinArray.h"

IntDinArray::IntDinArray(int size = 2)
{
	din_array = new IntData[size];
	size_array = size;
}

IntDinArray::~IntDinArray()
{
	delete[] din_array;
}

void IntDinArray::set_data()
{
	for (int i = 0; i < size_array; ++i)
	{
		din_array[i].set_data();
	}
}

void IntDinArray::print()
{
	for (int i = 0; i < size_array; ++i)
	{
		cout << "IntData array[" << i << "] = " << din_array[i].get_data() << endl;
	}
}