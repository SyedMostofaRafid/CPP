#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class vehicle
{
protected :
    string CompanyName;
    string Carname;
    int inventionDate;
    float distance;

    void display1()
    {
        cout<<"Name of the Company :"<<CompanyName<<endl;
        cout<<"Name of the Car :"<<Carname<<endl;
        cout<<"Invention date: :"<<inventionDate<<endl;
        cout<<"Distance Covered(KM):"<<distance<<endl;
    }

};
class car : public vehicle//Inheritance//
{
   int time=60;
   int seat;
public:
      car(string con , string can , int id , float d, int s)//constructor//
   {
        CompanyName= con;
        Carname= can;
        inventionDate= id;
        distance=d;
        seat=s;
   }
   void display()
   {
       display1();
       cout<<"Time:"<<time<<endl;
       cout<<"Maximum Speed:"<<distance/time<<"Km/h"<<endl;
       cout<<"Total Seats:"<<seat<<"\n"<<endl;
   }
    ~ car()//destructor//
    {
        cout<<"The car is destroyed"<<endl;
    }
};

int main()
{
    car c1("Ford","Mustang",2018,500,4);
    car c2("GTS","Ferrari",2021,600,2);

    c1.display();
    c2.display();


}
