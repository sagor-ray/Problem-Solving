#include <stdio.h>
#include <math.h>
main() {
     int salary,a,b,gross_salary;
     printf("Input the salary:\n");
     scanf("%d",&salary);
     a=salary*0.45;
     b=salary*0.25;
     gross_salary=salary+a+b;
     printf("the gross salary is:%d",gross_salary);
}
