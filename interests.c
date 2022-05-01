#include <stdio.h>
#include <math.h>
int main(){
         int n,r;
         float p,interest;
         n=4;
         r=12;
         printf("Enter the value of p:\n");
         scanf("%f",&p);
         interest=(p*n*r/100);
         printf("the interest is:%f",interest);
         return 0;
}
