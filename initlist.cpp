#include <iostream>
#include <initializer_list>

using namespace std;

int getSum(initializer_list<int> list)
{
    int result = 0;
    for (auto &elem : list)
        result += elem;
    return result;
}

int main()
{
    int a = 39, b = 84, c = 52;
    cout << getSum({a, b}) << endl;
    cout << getSum({a, b, c}) << endl;
    return 0;
}

