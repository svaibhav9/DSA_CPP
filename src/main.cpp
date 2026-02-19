#include <iostream>
#include <vector>
#include <string>
#include "BitInvert.hpp"
#include "TwoComplement.hpp"
#include "BitReverse.hpp"
#include "RemoveDuplicates.hpp"
#include "ReverseSentence.hpp"
#include "ReverseOrderofWords.hpp"
#include "PalindromeString.hpp"

using namespace std;

int main()
{
    char n  = 5;

    vector <string> TestList = {"Bit Invert", 
                                "Bit Reverse", 
                                "Two Complement",
                                "Reverse Word",
                                "Reverse Sentence",
                                "ReverseOrder",
                                "Palindrome String",
                                "Remove Duplicates",
                                "End of List"};
    for (size_t i = 0 ; i < TestList.size(); i++)
    {
        cout <<i+1<<" : "<<TestList[i]<<endl;

    }
    int choice = 0;
    cin >> choice;
    if (choice)
    {
    
       switch (choice){
        case 1:{
            BitInvert BI;
            BI.invert(n);
            break;
            }
        case 2:{
            BitReverse BR;
            BR.reverse(n);
            break;
            }
        case 3:{
            TwoComplement TC;
            TC.TwoComp(n);
            break;
            }
        case 4:{
            string s = "Vaibhav";
            ReverseWord RW;
            RW.RevWord(s,0,s.length()-1);
            break;
            }
        case 5:{
            string s = "This is a book";
            ReverseSentence RS;
            RS.RevSent(s);
            break;
            }
        case 6:{
            string s = "This is a brilliant question";
            ReverseOrder RO;
            RO.RevOrder(s);
            break;
            }
        case 7:{
            string s = "Tacocat";
            string s2 ="A man a plan a canal Panama";
            PalinString PS;
            PS.PalString(s);
            break;
            }
        case 8:{
            vector <int> n1 = {1,1,2,3,4,4,5};
            RemoveDuplicates RD;
            RD.RemDup(n1);
            break;
            }
        default:
            exit(0);
       }
    }
    else 
        cout <<"** Invalid Choice **"<<endl;
    return 0;
}
