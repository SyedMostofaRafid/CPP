#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    string CompanyName;
    string Carname;
    int inventionDate;
    float distance;

    vehicle(string con, string can, int id, float d)
    {
        CompanyName = con;
        Carname = can;
        inventionDate = id;
        distance = d;
    }

    void display()
    {
        cout << "Name of the Company: " << CompanyName << endl;
        cout << "Name of the Car: " << Carname << endl;
        cout << "Invention date: " << inventionDate << endl;
        cout << "Distance Covered (KM): " << distance << endl;
    }

    ~vehicle()
    {
        cout << "The car is destroyed" << endl;
    }
};

class car : public vehicle
{
public:
    int time = 60;
    int seat;

    car(string con, string can, int id, float d, int s) : vehicle(con, can, id, d), seat(s)
    {
    }

    void display()
    {
        vehicle::display(); // Call base class display function
        cout << "Time: " << time << endl;
        cout << "Maximum Speed: " << distance / time << endl;
        cout << "Total Seats: " << seat << endl;
    }
};

int main()
{
    car c1("Ford", "Mustang", 2018, 500, 4);
    car c2("GTS", "Ferrari", 2021, 600, 2);

    c1.display();
    c2.display();

    return 0;
}

