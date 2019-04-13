#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14;
    const double *cptr = &pi;
    double *const ptr = &pi;
    *ptr = 42;
    cout << "pi: " << pi << endl;
    cout << "*cptr: " << *cptr << endl;
    pi = 2.7182818;
    cout << "pi: " << pi << endl;
    cout << "*cptr: " << *cptr << endl;
    return 0;
}

