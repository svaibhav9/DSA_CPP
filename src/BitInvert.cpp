#include "main.hpp"

void BitInvert::invert(char n)
{
   cout <<endl<<__func__<<endl;
   int i = 7;
   int r = 0;

   int count1 = 0;
   int count0 = 0;

   int bits = 0;

   for (;i >= 0; --i) {

       bits = ((n >> i) & 1);
       cout << bits << " ";
   }
   cout << endl;
   char r1 = 0;
   bits = 0;
   for (i = 7 ;i >= 0; --i) {

       bits = ((n >> i) & 1);
       if (bits == 1)
           count1++;
       else
           count0++;
       r = ((bits ^ 1) << i);
       cout << (bits ^ 1) << " ";

       r1 = r1 | r;
   }
   cout<<"\n\ncout  invert = "<< +r1;
   printf("\ninvert = %d",r1);


   cout <<"\n\ninvert trick = "<< (~n);
   cout <<"\nnum of 1s = "<<count1<<" num of 0s = "<<count0<<endl;
}
   
