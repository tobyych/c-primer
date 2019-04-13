#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<unsigned> scores;
    unsigned score;
    while (cin >> score)
        scores.push_back(score);

    vector<unsigned> grades(11, 0);
    auto grade_it = grades.begin();
    for (auto it = scores.cbegin(); it != scores.cend(); it++)
    {
        ++(*(grade_it + *it/10));
    }

    cout << "Number of students: " << scores.size() << endl;
    for (auto it = grades.cbegin(); it != grades.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}


