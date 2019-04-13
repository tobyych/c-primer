#include <iostream>
#include <string>
#include "Sales_data.h"

int print2sum(Sales_data, Sales_data);

int main()
{
	Sales_data data1, data2;
	double price = 0.0;
    std::cout << "Enter the first sales data: ";
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
    std::cout << "Enter the second sales data: ";
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
    print2sum(data1, data2);
	return 0;
}

int print2sum(Sales_data data1, Sales_data data2)
{
    if (data1.bookNo == data2.bookNo){
        unsigned totalCount = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << data1.bookNo << " " << totalCount
                  << " " << totalRevenue << std::endl;
        if (totalCount != 0)
            std::cout << totalRevenue / totalCount << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0;
    } else{
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }
}

            
