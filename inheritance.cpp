#include <iostream>
using namespace std;
class complex
{
    private:
     float x,y;
     public:
     complex(){}
     complex(float a) {x=y=a;}
     complex(float real,float imaginary)
     {
         x=real;
         y=imaginary;
     }
     friend complex sum(complex, complex);
     friend void show(complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return (c3);
}
void show(complex c)
{
    cout<<c.x<<"+j"<<c.y<<endl;
}
int main()
{
    complex A(2.7,3.5);
    complex B(1.6);
    complex C;
    C=sum(A,B);
    cout<<"A= ";show(A);
    cout<<"B= ";show(B);
    cout<<"C= ";show(C);
    complex P,Q,R;
    P=complex(2.5,3.9);
    Q=complex(1.6,2.5);
    R=sum(P,Q);
    cout<<"\n P= ";show(P);
     cout<<"\n Q= ";show(Q);
      cout<<"\n R= ";show(R);

      return 0;
}
