#include <iostream>
using std::cin; using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string s, prev, max_word;
    unsigned curr_count = 0, max_count = 0;
    while (cin >> s){
        if (s == prev){
            ++curr_count;
        }
        else{
            if (curr_count > max_count){
                max_word = prev;
                max_count = curr_count; // update maximum count
            }
            curr_count = 1; // reset current count
            prev = s; // store the current word for the next loop
        }
    }
    // if the longest streak happens at the end of the input
    // we need to check one more time whether the current count
    // is greater than the max count or not
    if (curr_count > max_count){
        max_word = prev;
        max_count = curr_count; // update maximum count
    }
    cout << "The most frequent word is `" << max_word
         << "` and it has appeared " << max_count  << " time" 
         << (max_count > 1 ? "s" : "") << "." << endl;
    return 0;
}
