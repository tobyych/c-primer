#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s("Hello World!!!!");
    decltype (s.size()) punctCount = 0;
    for (auto c : s){
        if (ispunct(c))
            punctCount++;
    }
    cout << punctCount << " punctuations in the string \"" << s
         << '"' << endl;

    for (auto c : s){
        c = toupper(c);
    }
    cout << s << endl;

    for (decltype (s.size()) index = 0;
         index != s.size() && !isspace(s[index]);
         ++index)
        s[index] = toupper(s[index]);
    cout << s << endl;

 
    for (char &c : s){
        c = tolower(c);
    }
    cout << s << endl;

    decltype (s.size()) index = 0;
    while (index != s.size())
    {
        s[index] = 'X';
        index++;
    }
    cout << s << endl;

    for (decltype(s.size()) index = 0;
         index != s.size(); ++index)
        s[index] = 'X';
    cout << s << endl;

    return 0;
}

