#include <stdio.h>
int main()
{
    char ch='a';
    printf("Enter a single letter: ");
    //scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("Small Letter");
    }
    if(ch>='A'&&ch<='Z')
    {
        printf("Capital Letter");
    }
     return 0;
}
