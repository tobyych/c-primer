#include <iostream>
using std::cout; using std::endl;

using std::begin; using std::end;

int main()
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];
    for (size_t i = 0; i != rowCnt; ++i)
        for (size_t j = 0; j != colCnt; ++j)
            ia[i][j] = i * colCnt + j;

    for (int (&row)[4] : ia)
        for (int col : row)
            cout << col << ' ';
    cout << endl;

    for (int (*p)[4] = begin(ia); p != end(ia); ++p)
        for (int *q = begin(*p); q != end(*p); ++q)
            cout << *q << ' ';
    cout << endl;

    /*
    // using int_array = int[4];
    typedef int int_array[4];
    for (int_array *p = ia; p != ia + 3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
    cout << endl;
    */

    for (size_t i = 0; i != 3; ++i)
        for (size_t j = 0; j != 4; ++j)
            cout << ia[i][j] << ' ';
    cout << endl;

    return 0;
}

