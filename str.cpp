/*As a string can take input for characters without any spaces so we need to use "getline()" to print a full line*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string myname;
    cout<<"Type Your Name:";
    getline(cin,myname);//getline(cin,variable_name) is used to take line input//
    cout<<"Your Name is:"<<myname<<endl;
    return 0;
}
