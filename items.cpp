#include <iostream>
#include "Sales_item.h"

//using SI = Sales_item;
typedef Sales_item SI;

int main()
{
    SI currBook, Book;
    if(std::cin >> Book)
    {
        int count = 0;
        while (std::cin >> currBook)
        {
            if (Book.isbn() == currBook.isbn())
            {
                ++count;
            }
            else
            {
                std::cout << Book.isbn() << ", " << count << std::endl;
                Book = currBook;
                count = 1;
            }
        }
        std::cout << Book.isbn() << ", " << count << std::endl;
        return 0;
    }
    else
    {
        std::cout << "There is no data to work with." << std::endl;
        return -1;
    }

}
