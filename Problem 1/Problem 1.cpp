#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,k,n;
    cout<<"Enter how many number you want to input: ";
    cin>>n;
    for(k=1; k<=n; ++k)
    cin>>a[k];

    cout<<"Which position you want to input: ";
    cin>>i;
    j=n;

    while(j>=i)
    {
        a[j+1]=a[j];
        j--;
    }

    cout<<"Insert your Data: ";
    cin>>a[i];
    n++;

    cout<<"New array is: ";
    k=1;
    while(k<=n)
    {
        cout<<a[k]<<" ";
        k++;
    }
    cout<<"\n";
    return 0;
}
