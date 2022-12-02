
#include<iostream>
#include<string.h>
using namespace std;
class A
{
    string name;
    int roll_no;

public:
    A()
    {
        roll_no=90;
        name="vaishnavi";
        cout<<"constuctor of A"<<endl;
        cout<<"roll no="<<roll_no<<endl;
        cout<<"name="<<name<<endl;
    }
    ~ A()
    {
        cout<<"destuctor of A"<<endl;
    }
};
class D:public A
{
     string name;
    int roll_no;
    public:

    D()
    {
      roll_no=70;
      name="vaishn";
       cout<<"constuctor of D"<<endl;
       cout<<"roll no="<<roll_no<<endl;
        cout<<"name="<<name<<endl;
    }
    ~ D()
    {
        cout<<"destuctor of D"<<endl;
    }

};
int main()
{
    D obj;

}
