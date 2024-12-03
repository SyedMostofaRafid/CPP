#include <iostream>
using namespace std;
int main()
{
    int n,fact=1,i;
    cout << "Enter a positive integer: ";
    cin >> n;
    if ( n < 0)
        cout << "Error! ";
    else
    {
        for( i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << "Factorial of " << n << " is = " << fact;
    }
    return 0;
}
