#include <stdio.h>
#include <math.h>
#define p 3.1416
int main() {
int r;
float perimeter;
printf("Enter a value:\n");
scanf("%d",&r);
perimeter=4*p*r*r*r;
printf("The area of the circle is:%f",perimeter);
return 0;
}
