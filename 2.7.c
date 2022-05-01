#include <stdio.h>
main() {
int x,y;
short int z;
x=1111111111;
y=2222222222;
z=x+y;
printf("x=%d\ny=%d\nz=%d\n",x,y,z);
printf("Comment: Because of overflow the value of z show 4 digit from 6 digit.");
}
