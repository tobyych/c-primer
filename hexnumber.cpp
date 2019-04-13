#include <string>
#include <iostream>

using namespace std;

int main()
{
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by space: ";
    string result;
    string::size_type n;
    while (cin >> n)
        if (n < hexdigits.size())
            result += hexdigits[n];

    cout << "Hex number is: " << result << endl;

    return 0;
}

