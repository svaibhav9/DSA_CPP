#include <iostream>
#include "ReverseWord.hpp"

void ReverseWord::RevWord(string &s)
{
    int start = 0, end = s.length()-1;
    std::cout<<"Length = "<<end<<endl;
    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    std::cout<<"Reversed String = "<<s<<endl;

}
