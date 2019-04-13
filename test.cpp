#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    bool cond = 1;
    int x = 0, y = 0;
    int result = 0;
    result = cond ? ++x, ++y : --x, --y;
    cout << "cond: " << cond << ", result: " << result 
         << ", x: " << x << ", y: " << y << endl;
    cond = 0;
    result = cond ? ++x, ++y : --x, --y;
    cout << "cond: " << cond << ", result: " << result 
         << ", x: " << x << ", y: " << y << endl;

    return 0;
}

