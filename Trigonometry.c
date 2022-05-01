#include <stdio.h>
#include <math.h>
#define pi 3.1416
#define max 180
int main() {
    int angle;
    float x,y;
    angle=0;
    printf("Angle sin(angle)\n");
   while(angle<=max)
    {
        x=(pi/max)*angle;
        y=cos(x);
        printf("%15d%13.4f\n",angle,y);
        angle=angle+10;
    }
    return 0;
}
