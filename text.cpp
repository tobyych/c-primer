#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

void print_vector (vector<int>);
void print_vector (vector<string>);

int main()
{
    vector<int> v1;               // 0  element
    vector<int> v2(10);           // 10 elements, values are all 0
    vector<int> v3(10, 42);       // 10 elements, values are all 42
    vector<int> v4{10};           // 1  element,  value  is  10
    vector<int> v5{10, 42};       // 2  elements, values are 10 and 42
    vector<string> v6{10};        // 10 elements, values are all empty string
    vector<string> v7{10, "hi"};  // 10 elements, values are all "hi"

    print_vector(v1);
    print_vector(v2);
    print_vector(v3);
    print_vector(v4);
    print_vector(v5);
    print_vector(v6);
    print_vector(v7);

    for (auto it = v3.begin(); it != v3.end(); it++)
        *it *= 2;
    print_vector(v3);

    for (auto it = v7.begin(); it != v7.end(); it++)
        for (auto &c : *it)
            c = toupper(c); 
    print_vector(v7);

    return 0;
}

void print_vector(vector<int> v)
{
    for (auto it = v.cbegin(); it != v.cend();
         it++)
        cout << *it << ' ';
    cout << endl;
}

void print_vector(vector<string> v)
{
    for (auto it = v.cbegin(); it != v.cend();
         it++)
        cout << *it << ' ';
    cout << endl;
}
