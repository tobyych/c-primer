#include <iostream>
using std::cin; using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cstring>
using std::strcat; using std::strcpy;
using std::strcmp;

int main()
{
    const char word1[6] = "hello";
    const char word2[6] = "world";

    char word3[11];
    strcpy(word3, word1);
    strcat(word3, word2);

    cout << word3 << endl;

    return 0;
}
