#include <iostream>
#include <vector>
#include "BitInvert.hpp"
#include "TwoComplement.hpp"
#include "ReverseWord.hpp"
#include "BitReverse.hpp"

using namespace std;

int main()
{
    char n  = 5;

    vector <string> TestList = {"Bit Invert", "Two Complement","Reverse Word","Bit Reverse", "End of List"};
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
            TwoComplement TC;
            TC.TwoComp(n);
            break;
            }
        case 3:{
            string s = "Vaibhav";
            ReverseWord RW;
            RW.RevWord(s);
            break;
            }
        case 4:{
            BitReverse BR;
            BR.reverse(n);
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
