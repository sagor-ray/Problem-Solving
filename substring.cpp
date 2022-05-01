#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

string str,strnew;
int location;
class String
{
public:
    string newstring="",newString;
    int i,index,count=0;
    string substring(string str, int position);
    string insert(string str, int position, string insertedstring);
    int pattern_matching(string str, string newString);

};

int main()
{
    String obj;

    cout<<"Enter the main string: ";
    getline(cin,str);

    cout<<"Enter a new String for inserting: ";
    getline(cin,strnew);

    location = obj.pattern_matching(str,strnew);
    cout<<location;

    return 0;
}

string String::substring(string str, int position)
{
    newstring="";
    for(i=position-1; i<str.length(); i++)
    {
        newstring += str[i];
    }
    return newstring;
}

string String::insert(string str, int position, string insertedstring)
{
    for(i=0; i<str.length(); i++)
    {
        newstring += str[i];
        if(i == position-1)
        {
            for(int j=0; j<insertedstring.length(); j++)
            {
                newstring +=insertedstring[j];
            }
        }
    }
    return newstring;
}

int String::pattern_matching(string str, string newString)
{
    for(i=0; i<str.length(); i++)
    {
        if(str[i] == newString[0])
        {
            for(int j=0; j<newString.length(); j++)
            {
                if(str[i+j] == newString[j])
                {
                    count++;
                }
            }
            if(count == newString.length())
            {
                index = i+1;
                break;
            }
        }
    }
    return index;
}
