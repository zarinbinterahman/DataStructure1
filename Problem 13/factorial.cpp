#include<iostream>
using namespace std;

long int multiplyNumbers(int n);

int main()
{
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<"Factorial of"<<n<<"is number: "<< multiplyNumbers(n);
    return 0;
}
long int multiplyNumbers(int n)
{
    if (n >= 1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
