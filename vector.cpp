#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> ivec;  // old style: vector<int > note the space
                       // before the angle bracket
    vector<int> ivec_2(10, -1);        // vector<int> ivec(10);
    vector<string> svec(10, "hi!");    // vector<string> svec(10);

    /*
    vector<unsigned int> scores(11, 0);
    unsigned int grade;
    while (cin >> grade){
        if (grade <= 100)
            ++scores[grade / 10];
    }
    

    for (auto i : scores)
        cout << i << " ";
    cout << endl;

    cout << scores.size() << endl;
    */

    int num;
    while (cin >> num)
        ivec.push_back(num);

    cout << string(30, '*') << endl;
    for (decltype(ivec.size()) index = 0; index != ivec.size() - 1; 
         index++)
        cout << ivec[index] << ' ' << ivec[index + 1] << endl;

    cout << string(30, '*') << endl;
    for (decltype(ivec.size()) index = 0; index != ivec.size() / 2;
         index++)
        cout << ivec[index] << ' ' << ivec[ivec.size() - 1 - index] << endl;

    cout << string(30, '*') << endl;
    for (auto it = ivec.cbegin(); it != ivec.cend(); it++)
        cout << *it << endl;

    return 0;
}

