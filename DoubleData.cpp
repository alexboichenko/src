#include "DoubleData.h"

DoubleData::DoubleData()
{
	user_data = 0;
}

DoubleData::DoubleData(double data = 0)
{
	user_data = data;
}

DoubleData::~DoubleData() {}

void DoubleData::print()
{
	cout << user_data << endl;
}

void DoubleData::set_data()
{
	cout << "Enter double data: ";
	cin >> user_data;
}

double DoubleData::get_data()
{
	return user_data;
}