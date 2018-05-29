#include <iostream>
using namespace std;

int main()
{
  int a[100], n, i, j, temp;

  cout<<"Enter number of elements\n";
  cin>>n;

  cout<<"Enter the elements\n";

  for(i=0;i<n;i++)
    cin>>a[i];

  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1]) /* For decreasing order use < */
      {
          temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }

  cout<<"Sorted list in ascending order:\n";

  for(i=0;i<n;i++)
     cout<<a[i]<<" ";

  return 0;
}

