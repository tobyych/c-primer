#ifndef Sales_data_h
#define Sales_data_h

#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

#endif
