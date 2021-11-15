#ifndef __BASEDATA_H__
#define __BASEDATA_H__
#include <iostream>
using namespace std;

class BaseData
{
public:
	BaseData();
	virtual ~BaseData();
	virtual void print();
	void set_data();
	template <typename T>
	T get_data();
};

#endif