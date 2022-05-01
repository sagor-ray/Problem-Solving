#include <iostream>

#include<iomanip>
#include<conio.h>
using namespace std;
struct person
{

    int age;
    double salary;
};
int main()
{
    struct person Rahim,Karim,Jamal;
    Rahim.age=25;
    Rahim.salary=13000;
    Karim.age=24;
    Karim.salary=13400;
    Jamal.age=23;
    Jamal.salary=13400;

    cout<<"About"<<setw(15)<<"Age"<<setw(15)<<"Salary\n\n";
    cout<<"Rahim"<<setw(14)<<Rahim.age<<setw(14)<<Rahim.salary<<endl;
    cout<<"Karim"<<setw(14)<<Karim.age<<setw(14)<<Karim.salary<<endl;
    cout<<"Jamal"<<setw(14)<<Jamal.age<<setw(14)<<Jamal.salary;

    getch();
}
