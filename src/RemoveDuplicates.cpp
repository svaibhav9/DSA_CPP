#include <iostream>
#include <bitset>
#include <vector>
#include "RemoveDuplicates.hpp"

using namespace std;

void RemoveDuplicates::RemDup(vector <int> n)
{
   cout <<endl<<__func__<<endl;
   size_t index = 0;
   size_t i = 0;
   for (;i<n.size();i++)
   {
        if (i == 0 || n[i] != n[i-1])
        {
            n[index++] = n[i];
        }
   }
   cout<<"After Removing Duplicates"<<endl;
   for (i = 0; i < index; i++)
        cout<<n[i]<<"\t";

}
   
