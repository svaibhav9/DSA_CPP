#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include "LongestSubstring.hpp"

using namespace std;

void LongestSubstring::LongSub(string &s1)
{
    cout<<"String = "<<s1<<endl;
    unordered_map <char, int> lastPos;
    int maxlen = 0;
    int left = 0, right = 0;
    string longest;
    char c;
    for (;right < s1.length();right++)
    {
        c = s1[right];
        if (lastPos.find(c) != lastPos.end() && lastPos[c] >= left)
            left = lastPos[c]+1;


       lastPos[c] = right;

        maxlen = max(maxlen, right - left + 1);

    }
    cout<<"Length of longest substring = "<<maxlen<<endl;
}
