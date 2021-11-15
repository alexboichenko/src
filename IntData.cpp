#include "IntData.h"

IntData::IntData()
{
	m_data = 0;
}

IntData::IntData(int data = 0)
{
	m_data = data;
}

IntData::~IntData() {}

void IntData::print()
{
	cout << m_data << endl;
}

void IntData::set_data()
{
	cout << "Enter int data: ";
	cin >> m_data;
}

int IntData::get_data()
{
	return m_data;
}