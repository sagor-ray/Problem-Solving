#include<iostream>
#include<string.h>
using namespace std;
class staff
{
            protected:
             int code;
            string name;
             public:
             void set_info( string n,int c)
             {
                  name=n;
                   code=c;
             }
};

class education:public staff
{
           protected:
            string quali;
           public:
           void set_qualification( string q){quali=q;}
};

class teacher : public education
{
            protected:
            string sub,publication;
                     public:
            void set_details( string s, string p)
                     {
                  sub=s;
                  publication=p;

            }

                   void show()
            {
                     cout<<"name"<<name<<endl<<"code"<<code<<endl<<"subject"<<sub<<endl
<<"publication"<<publication<<endl<<"qualification"<<quali<<endl;
           }
};

class officer:public education
{
      string grade,cata;
          public:
          void set_details( string g,string t)
                     {
                         cata=t;
                     grade=g;
           }

           void show()
            {
               cout<<"name"<<name<<endl<<"code"<<code<<endl<<"Catagory"
                  <<cata<<"Qualification"<<quali<<endl;

                     }
};

class typist: public staff
{
        protected:
         float speed;
       public:
       void set_speed(float s)
                  {
              speed=s;
        }
};
        class regular:public typist
{
           protected:
           float wage;
           public:
           void set_wage(float w){wage=w;}
           void show()
            {
                       cout<<"name"<<name<<endl<<"code"<<code<<endl<<"speed"<<speed<<endl
<<"wage"<<wage<<endl;
            }
};
class causal:public typist
{
           float wage;
           public:
           void set_wage(float w){wage=w;}

           void show()
           {
               cout<<"name"<<name<<endl<<"code"<<code<<endl<<"speed"<<speed<<endl
<<"wage"<<wage<<endl;
          }

};

int main()
{

           teacher t;
              t.set_info("Ataur",420);
             t.set_details("programming with c++"," Tata McGraw Hill");
             t.set_qualification("PHD from programming ");
          officer o;
         o.set_info("Rashed",222);
         o.set_details("First_class");
         o.set_qualification("2 years experienced");
         regular rt;
         rt.set_info("Robiul Awal",333);
         rt.set_speed(85.5);
         rt.set_wage(15000);
                 causal ct;
        ct.set_info("Kawser Ahmed",333);
        ct.set_speed(78.9);
        ct.set_wage(10000);
        cout<<"  About teacher: "<<endl;
         t.show();
         cout<<" About officer:"<<endl;
         o.show();
         cout<<" About regular typist :"<<endl;
         rt.show();
         cout<<" About causal typist :"<<endl;
         ct.show();

 return 0;
}

