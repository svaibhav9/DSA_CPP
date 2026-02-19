#include <iostream>
#include <string>
#include <algorithm>
#include "Anagram.hpp"

using namespace std;

void Anagram::Ana(string &s1, string &s2)
{

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    cout <<"Sorted = "<<s1<<endl;
    cout <<"Sorted = "<<s2<<endl;

    if (s1.length() != s2.length())
    {
        cout <<"Not Anagrams"<<endl;
        return;
    }
    size_t start = 0;
    while (start < s1.length())  
    {
        if (s1[start] != s2[start]){
            cout <<"Not Anagrams"<<endl;
            return;
        }
        start++;
    }
    cout <<"Anagrams"<<endl;

    //cout<<"Reversed String = "<<s<<endl;
}
