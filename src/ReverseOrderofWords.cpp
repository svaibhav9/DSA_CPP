#include <iostream>
#include <string>
#include "ReverseOrderofWords.hpp"

using namespace std;

void ReverseOrder::RevOrder(string &s)
{
    if (s.empty())
        return;

    int start = 0;

    RevWord(s, start, s.length()-1);

    size_t i = 0;
    for (;i <= s.length();i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            RevWord(s, start, i-1);
            start = i+1;
        }
    }
    cout <<"Reversed Sentence = "<<s<<endl;
}
