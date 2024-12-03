#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,th_Number;
    cout<<"Determine the given:";
    cin>>th_Number;
    while(th_Number--)
    {
    cout<<"First Number Is:";
    cin>>num1;
    cout<<"Second Number Is:";
    cin>>num2;
    cout<<"Third Number Is:";
    cin>>num3;
    if(num1==num2+num3)
        cout<<"Yes"<<endl;
    else if(num2==num1+num3)
        cout<<"Yes"<<endl;
    else if(num3==num1+num2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
return 0;
}