#include "IntDinArray.h"
#include "DoubleDinArray.h"

int main()
{
	IntData data_int(10);
	data_int.print();
	data_int.set_data();
	int num_test_1 = data_int.get_data();
	cout << num_test_1 << endl;

	DoubleData data_double(5.5);
	data_double.print();
	data_double.set_data();
	double num_test_2 = data_double.get_data();
	cout << num_test_2 << endl;

	IntDinArray int_din_array(5);
	int_din_array.set_data();
	int_din_array.print();

	DoubleDinArray double_din_array(5);
	double_din_array.set_data();
	double_din_array.print();

	return 0;
}