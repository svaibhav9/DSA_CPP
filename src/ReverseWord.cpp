#include <iostream>
#include <string>
#include "ReverseWord.hpp"

using namespace std;

void ReverseWord::RevWord(string &s, int start, int end)
{
    //cout<<"Length = "<<end<<endl;
    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    //cout<<"Reversed String = "<<s<<endl;

}
