#include <stdio.h>
int main()
{
     double n;
   float x,y,z,a,b,c,d,e,A,B,C,D;
    scanf("%D",n);
    int h,f,t,te,fi,tw,o,pf,ptf,pt,pzf,pzo;
    h=n/100;
    x=n-(h*100);
    f=x/50;
    y=x-(f*50);
    t=y/20;
    z=y-(t*20);
    te=z/10;
    a=z-(te*10);
    fi=a/5;
    b=a-(fi*5);
    tw=b/2;
    c=b-(tw*2);
    o=c/1;
    d=c-(o*1);
    pf=d/0.5;
    e=d-(pf*0.5);
    ptf=e/0.25;
    A=e-(ptf*0.25);
    pt=A/0.10;
    B=A-(pt*0.10);
    pzf=B/0.05;
    C=B-(pzf*0.05);
    pzo=C/0.01;
    D=C-(pzo*0.01);
    printf("NOTAS:");
    printf("%d nota(s) de R$ 100.00",h);
     printf("%d nota(s) de R$ 50.00",f);
      printf("%d nota(s) de R$ 20.00",t);
       printf("%d nota(s) de R$ 10.00",te);
        printf("%d nota(s) de R$ 5.00",fi);
         printf("%d nota(s) de R$ 2.00",tw);
         printf("MOEDAS:");
         printf("%d moeda(s) de R$ 1.00",o);
         printf("%d moeda(s) de R$ 0.50",pf);
         printf("%d moeda(s) de R$ 0.25",ptf);
         printf("%d moeda(s) de R$ 0.10",pt);
         printf("%d moeda(s) de R$ 0.05",pzf);
         printf("%d moeda(s) de R$ 0.01",pzo);
         return 0;
}
