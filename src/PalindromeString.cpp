#include "PalindromeString.hpp"
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

void PalinString::PalString(string &s)
{
    //cout<<"Length = "<<end<<endl;
    int start = 0;
    int end = s.length()-1;
    string cleaned;
    while (start <= end)
    {
        if (s[start] != ' ' || start == end) 
        {
            cleaned += s[start];
        }
        start++;
    }
    cout <<"String without spaces = "<<cleaned<<endl;

    start = 0;
    end = cleaned.length()-1;

    while (start < end){
        //cout << tolower(cleaned[start])<<" "<<tolower(cleaned[end])<<endl;
        if (tolower(cleaned[start]) != tolower(cleaned[end]))
        {
            cout <<cleaned<<" is Not Palidrome"<<endl;
            return;
        }
        start++;
        end--;

    }
    cout <<cleaned<<" is Palidrome"<<endl;
    //cout<<"Reversed String = "<<s<<endl;
}
