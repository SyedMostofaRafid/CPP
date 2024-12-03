#include<iostream>
using namespace std;
class employee
{
	public :
	string name;
	string id;
	int age;

	employee(string n, string i, int a)
	{
	   name = n;
	   id = i;
	   age = a;
	}
    void display()
	{
		cout<< "Student's Name: "<<name<<endl;
		cout<< "Student's ID: "<<id<<endl;
		cout<< "Student's Age: "<<age<<endl;
	}
};
int main()
{

      employee e1("Rafid","320E1",23);


      e1.display();

}

