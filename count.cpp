#include <iostream>

int main()
{
    int currVal = 0, Val = 0;
    if (std::cin >> currVal)
    {
        int count = 1;
        while (std::cin >> Val)
        {
            if (Val == currVal)
                ++count;
            else
            {
                std::cout << currVal << " occurs " << count
                          << " times" << std::endl;
                currVal = Val;
                count = 1;
            }
        }
        std::cout << currVal << " occurs: " << count
                  << " times" << std::endl;
    }
    return 0;
}
            

