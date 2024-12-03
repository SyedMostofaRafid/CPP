#include<iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    void print1()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
};
class student : public person
{
    public:
    int id;
    void print2()
    {
        cout<<"ID :"<<id<<endl;
        print1();
    }
};

int main()
{
    student st1;
    st1. id=892;
    st1. name="Rafid";
    st1. age= 22;
    st1. print2();

}
