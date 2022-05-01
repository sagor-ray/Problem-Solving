#include <iostream>
using namespace std;

   class rectangle
   {
         public:
       int length,width;
       /*rectangle(int a,int b)
       {
           length=a;
           width=b;
       }*/

       void set_values()
       {
          cout<<"Enter the value of length and width: ";
          cin>>length>>width;

       }
       int area()
       {
           int rect_area=length*width;
           return rect_area;
       }
    };


       int main()
       {
           rectangle recta;//rectb

        //recta.rectangle(10,20);
           recta.set_values();
           //rectb.set_values();
           cout<<"Area of rectangle:"<<recta.area()<<"\n";//<<rectb.area();
           return 0;
       }


