#include <stdio.h>
#include <math.h>
int main ()
{
   int binary,decimal=1,base=1,reminder;
   printf("Enter a binary number: ");
   scanf("%d",&binary);
   while(binary >0)
   {
       reminder=binary%10;
       decimal=(decimal+reminder);
       binary=binary/10;
       //base=base*2;
   }
   printf("The binary value is: %d\n",binary);
   printf("The decimal equvalent is: %d",decimal);
   return 0;
}

