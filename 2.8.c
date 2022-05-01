#include<stdio.h>
int main() 
{
        
    int n,i;
        
    for(n=1;n<=5;n++)
         {      
            for(i=1;i<=10;i++) 
        {          
             printf("%d X %d = %d\n",n,i,n*i); 
        } 
    }
        return 0;
}
