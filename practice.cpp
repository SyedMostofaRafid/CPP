#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class vehicle
{
protected:
    string vehicleName;
    string vehicleType;
    int tires;
    void display_v()
    {
        cout<<"Name of the Vehicle: "<<vehicleName<<endl;
        cout<<"Vehicle Type: "<<vehicleType<<endl;
        cout<<"Number of Tires: "<<tires<<endl;
    }
};
class car : public vehicle
{
    string carname;
    string companyname;
    float cardistance;
    int time=60;
    float speed;
    car(string carN, string comN, float cd, int t, float s)
    {
        carname=carN;
        companyname=comN;
        cardistance=cd;
        speed=s;
    }
    void display_c()
    {
        display_v();
        cout<<"Name of the Car: "<<carname<<endl;
        cout<<"Name of the company: "<<companyname<<endl;
        cout<<"Distance covered in hour: "<<cardistance<<endl;
        cout<<"Speed of the Car: "<<cardistance/time<<endl;
    }

};

int main()
{
    car c1("car","four wheeler",4,"Mustang","Ford",100.25)
    c1.display_c();
}
