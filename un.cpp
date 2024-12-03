#include<iostream>
using namespace std;
class employee
{
	public :
	string name;
	string id;
	int age;
	void display()
	{
		cout<< "Student's Name: "<<name<<endl;
		cout<< "Student's ID: "<<id<<endl;
		cout<< "Student's Age: "<<age<<endl;
	}
};
int main()
    {
      employee e1;
      e1.name = "Jobbar Mollah";
      e1.id = "320EAC";
      e1.age = 23;

      e1.display();

    }

