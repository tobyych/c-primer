#include <vector>
#include <iostream>

using namespace std;

vector<int>::iterator binarysearch(vector<int>, int);

int main()
{
    vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    /*
    int num;
    while (cin >> num)
        iv.push_back(num);
    */

    int target;
    cin >> target;

    vector<int>::iterator target_it;
    target_it = binarysearch(iv, target);
    cout << (target_it - iv.end()) << endl;

    return 0;
}

vector<int>::iterator binarysearch(vector<int> iv, int target)
{
    auto start = iv.begin(), end = iv.end();
    auto mid = iv.begin() + (end - start)/2;
    while (mid != end && *mid != target){
        if (target < *mid)
            end = mid;
        else
            start = mid + 1;
        mid = start + (end - start)/2;
    }
    return mid;
}
