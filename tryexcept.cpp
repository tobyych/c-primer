#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int a, b;
    bool tryAgain;
    do {
        tryAgain = false;
        try {
            cin >> a >> b;
            if (b == 0)
                throw runtime_error("Cannot divide by 0");    
            cout << a / b << endl;
        } catch (runtime_error err) {
            cout << err.what()
                 << "\nTry again? Enter y/n"
                 << endl;
            char c;
            if (cin >> c && c != 'n')
                tryAgain = true;
        }
    } while (tryAgain);
    return 0;
}
