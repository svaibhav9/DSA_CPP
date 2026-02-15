#include <iostream>
#include <bitset>
#include "BitReverse.hpp"

using namespace std;

void BitReverse::reverse(char n)
{
   cout <<endl<<__func__<<endl;
   cout<<"n = "<<bitset<8>(n)<<endl;
   int r = 0;
   for (int j=7;j>=0;j--)
   {
        r |= (n & 1) << j;
        n = n >> 1;
   }
   cout <<"Reversed Bits = "<<bitset<8>(r)<<endl;
}
   
