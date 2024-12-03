#include<iostream>
using namespace std;
class preson
{
protected:
    string name;
    int age;
    void output()
    {
        cout<<"Name"<<name<<"/nage"<<age<<endl;
    }
};
class student : public person//inheritance//
{
public :
    string id;
    student(string id)//constructor//
    {
        cout<<"ID:"<<id<<endl
    }
    ~student()
    {
        cout<<"destroyed"<<endl;//destructor//
    }
string name = "RAFID";//overloading//
};
int main()
{
    person p1;
    p1.name="Rafid";
    p1.age=23;
    p1.output();
    student s1;
    s1.id=892;
    cout<<s1.id<<endl;
    return 0;
}
