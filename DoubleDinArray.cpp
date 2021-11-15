#include "DoubleDinArray.h"

DoubleDinArray::DoubleDinArray(int size = 2)
{
	din_array = new DoubleData[size];
	size_array = size;
}

DoubleDinArray::~DoubleDinArray()
{
	delete[] din_array;
}

void DoubleDinArray::set_data()
{
	for (int i = 0; i < size_array; ++i)
	{
		din_array[i].set_data();
	}
}

void DoubleDinArray::print()
{
	for (int i = 0; i < size_array; ++i)
	{
		cout << "DoubleData array[" << i << "] = " << din_array[i].get_data() << endl;
	}
}