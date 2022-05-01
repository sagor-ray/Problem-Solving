#include <stdio.h>
main() {
    int a;
    char b;
    printf("Input a character:\n");
    scanf("%c",&b);
    a=b;
    printf("%d\n",&a);
    if(a>=45 &&a<=57 || a>=65 &&a<=90 || a>=97 &&a<=122)
    printf("Your inputted value is a character");
    else
    printf("Your inputted value is a special charecter");
}
