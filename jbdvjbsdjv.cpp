#include<iostream>
using namespace std;
class bike
{
public :
    int honda = 10;
    void pubhonda()
    {
        cout<<"Number Of Honda";
    }
private :
    int yamaha = 20;
    void priyamaha()
    {
        cout<<"Number of Yamaha";
    }
protected :
    int suzuki=30;
    void prosuzuki()
    {
        cout<<"Number of Suzuki";
    }
};
class subbike : public bike
{
public :
    void display()
    {
        cout<<"Number of honda,suzuki :"<< honda+suzuki;
        pubhonda();
        prosuzuki();
    }
};
int main()
{
    subbike b ;
    cout<<b.display;
    return 0;
}
