#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    /*
    unsigned scores[11] = {};
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
            ++scores[grade/10];
    }
    for (auto i : scores)
        cout << i << " ";
    cout << endl;
    */

    /*
    int array[10] = {};
    for (size_t ix = 0; ix < 10; ++ix)
        array[ix] = ix;
    for (auto i : array)
        cout << i << ' ';
    cout << endl;

    vector<int> iv(10, 0);
    for (auto idx = iv.begin(); idx != iv.end(); idx++)
        *idx = (idx - iv.begin());

    for (auto i : iv)
        cout << i << ' ';
    cout << endl;
    */

    string nums[] = {"one", "two", "three"};
    // equivalent ways to initialise a point to the array nums
    string *p = &nums[0];
    string *p2 = nums;         // points to the first element in the array
    cout << (p == p2) << endl; // returns 1 (True)

    for (int i = 0; i < 3; i++)
        cout << *(p2 + i) << ' ';
    cout << endl;

    // another (better) way to write the above loop
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int *e = &array[10];
    for (int *b = array; b != e; b++)
        cout << *b << ' ';
    cout << endl;

    // new library functions in C++11
    int *beg = begin(array);
    int *last = end(array);
    while (beg != last)
        cout << *(beg++) << ' ';
    cout << endl;

    /*
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    auto ia2 = ia; // same as: auto ia2(&ia[0]);
    decltype(ia) ia3 = {0,1,2,3,4,5,6,7,8,9}; // ia3 is an array of ten ints
    */

    return 0;

}
