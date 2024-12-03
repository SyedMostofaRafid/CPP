#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[10];
    cout<<"Enter Your String:";
    cin>>str;
    int i,j,flag=0;
    int len=strlen(str);
    for(i=0,j=len-1; i<j; i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag=0;
        }
        else
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        cout<<"Result : Palindrome"<<endl;
    }
    else
    {
        cout<<"Result : Not palindrome"<<endl;
    }
}
