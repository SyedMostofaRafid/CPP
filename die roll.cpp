#include<iostream>
using namespace std;
int main()
{
    int y,w,d;
    cout<<"Yakko:";
    cin>>y;
    cout<<"Wakko:";
    cin>>w;
    cout<<"Dot:";
    cin>>d;
    if(d>=y)
        cout<<"dot";
    else if(d>=w)
        cout<<"DOT";
    else if(y>d && y>w)
        cout<<"YAKKO";
    else if(w>d && w>y)
        cout<<"WAKKO";
}
