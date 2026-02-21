#include <iostream>
#include <string>
#include "ReverseSentence.hpp"

using namespace std;

void ReverseSentence::RevSent(string &s)
{
    if (s.empty())
        return;

    int start = 0;
    size_t i = 0;
    for (;i <= s.length();i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            RevWord(s, start, i-1);
            start = i+1;
        }
    }
    //RevWord(s, start, i-1);
    
    cout <<"Reversed Sentence = "<<s<<endl;

}
