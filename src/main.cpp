#include "main.hpp"
int main()
{
    char n  = 5;

    vector <string> TestList = {"Bit Invert", "Two Complement", "End of List"};
    for (size_t i = 0 ; i < TestList.size(); i++)
    {
        cout <<i+1<<" : "<<TestList[i]<<endl;

    }
    int choice = 0;
    cin >> choice;
    if (choice)
    {
    
       switch (choice){
       case 1:
        BitInvert BI;
        BI.invert(n);
        break;
       case 2:
        TwoComplement TC;
        TC.TwoComp(n);
        break;
        default:
            exit(0);
       }
    }

    else 
        cout <<"** Invalid Choice **"<<endl;
    return 0;
}
