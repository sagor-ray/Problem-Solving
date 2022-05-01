#include <stdio.h>
float triangle ();
int main()
 {


  triangle();


 }
float triangle ()
{
   float a,b,c,Area,s;
 printf("Enter the value of 3 side:");
     scanf("%d %d %d",&a,&b,&c);
     s=(a+b+c)/2;
     Area=(s*(s-a)*(s-b)*(s-c));
      printf("The value of the area of the triangle is: %f",Area);
     return Area;
}
