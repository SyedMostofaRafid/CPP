#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name;
    int id;
    float cg;
    student*next;
};
void display(student*head)
{
    student*ctr=head;
    while(ctr=!nullptr)
    {
        cout<<"Name:"<<ctr->name<<endl;
        cout<<"Name:"<<ctr-id<<endl;
        cout<<"Name:"<<ctr-cg<<endl;
        ctr=ctr*next
    }
}
int main()
{
    student*head=nullptr;
    for(int i=0; i<=5; i++)
    {
        student*new_student = new student();
        cout<<"Student's Name"<<endl;
        cin>>new_student->student>>endl;
        new_student->next=head;
        head=new_student;
    }
    student*temp=head;
    while(temp!=nullptr)
    {
        cout<<"Name:"<<temp->name<<endl;
        temp=temp->next;
    }
    temp=head;
    while
}
