#include "TwoComplement.hpp"

void TwoComplement::TwoComp(char n)
{
    int mask = 0;
    int temp = n;
    while (temp > 0)
    {
        mask = (mask << 1)|1;
        temp >>=1;
    }
    
    cout <<"n = "<<bitset<8>(n) << endl;
    cout <<"Mask = "<<bitset<8>(mask) << endl;
    cout <<"Complement = "<< bitset<8>(n ^ mask)<<endl;

    int bits = 0,r = 0;
    for (int i = 7; i > 0; i--)
    {
        bits = (n >> i) & 1; 
        r  |= ((bits ^ 1) << i);
    }
    cout <<"Two's complement is "<< bitset<8>(r+1)<<endl;

}
