#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) // char *argv[] is the same as char **argv
{
    for (int i = 1; i < argc; ++i)
        cout << argv[i] << endl;
    return 0;
}
