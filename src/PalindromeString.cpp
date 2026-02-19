#include "PalindromeString.hpp"
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

void PalinString::PalString(string &s)
{
    //cout<<"Length = "<<end<<endl;
    size_t start = 0;
    string cleaned;
    while (start < s.length())
    {
        if (isalnum(s[start])) 
        {
            cleaned += s[start];
        }
        start++;
    }
    cout <<"String without spaces = "<<cleaned<<endl;

    start = 0;
    int end = cleaned.length()-1;

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
