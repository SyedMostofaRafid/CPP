#include<iostream>
using namespace std;

class person
{
public:
    string name;
    int id;
    //constructor
    person(string n,int i)
    {
        name=n;
        id=i;
    }
    person(){}

    void display()
    {

        cout<<name<<" "<<id<<endl;
    }
    //destructor
    ~person()
    {
        cout<<"destroyed"<<endl;
    }
};

int main()
{

    person p1;
    p1.name="rafid";
    p1.id=892;
    p1.display();

}
