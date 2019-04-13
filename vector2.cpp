#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout;
using std::endl;

using std::begin; using std::end;

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    vector<int> iv(begin(array), end(array));

    for (auto i : iv)
        cout << i << ' ';
    cout << endl;

    int arr[10] = {};
    int *p = arr;

    /*
    auto it = iv.cbegin();
    while (p != end(array))
        *(p++) = *(it++);
    */

    for (const auto &i : iv)
        *(p++) = i;

    for (p = arr; p != end(arr); p++)
        cout << *p << ' ';
    cout << endl;

    return 0;
}

