#include<iostream>
using namespace std;

int Fibonacci(int n);

int main()
{
   int n, c = 0, i;
   cout<<"Enter the fibonacci limit: ";
   cin>>n;
   cout<<"Fibonacci series:\n";

   for ( i = 1 ; i<= n ; i++ )
   {
      cout<< Fibonacci(c)<<" ";
      c++;
   }

   return 0;
}

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}

