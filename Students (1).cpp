#include<bits/stdc++.h>//Header file
#define EPSILON 0.001
using namespace std;
double func(double x)//The function is x^3 - 3*x  + 1 will be used to approach to bisection method
{
    return x*x*x - 3*x + 1;
}
double derivativeFunc(double x)// Derivative of the function "3*x^x - 2*x"
{
    return 3*x*x - 2;
}
void NewtonRaphson(double x)// root finding function
{
    double h = func(x) / derivativeFunc(x);
    while (abs(h) >= EPSILON)
    {
        h = func(x)/derivativeFunc(x);
  
        // x(i+1) = x(i) - f(x) / f'(x)  
        x = x - h;
    }
 
    cout << "The value of the root is : " << x;
}
int main()// Driver program to test 
{
    double x0 = -30; // Initial values
    NewtonRaphson(x0);
    return 0;
}