#include <iostream>
#include <string>
#include "ReverseSentence.hpp"

using namespace std;

void ReverseSentence::RevSent(string &s)
{
    int start = 0;
    size_t end = s.length()-1;
    for (size_t i = 0;i < end;i++)
    {
        if (s[i] ==' ')
        {
            RevWord(s, start, i-1);
            start = i+1;
        }
    }
    RevWord(s,start,end);
    
    cout <<"Reversed Sentence = "<<s<<endl;

}
