#include<iostream>
using namespace std;
int main()
{
    int i,rev=0;
    cout<<"Enter Your Number:";
    cin>>i;

    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if(i==rev)
    {
        cout<<"Yes. This is a palindrome";
    }
    else
    {
        cout<<"No. It's not a Palindrome";
    }
    return 0;
}
