#ifndef __DOUBLEDATA_H__
#define __DOUBLEDATA_H__
#include "BaseData.h"

class DoubleData : public BaseData
{
private:
	double user_data;
public:
	DoubleData();
	DoubleData(double data);
	~DoubleData();
	void print();
	void set_data();
	double get_data();
};

#endif