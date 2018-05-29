#include<iostream>
using namespace std;
int main()
{
    int a[20];
    int n, i, beg, en, mid,item;
    cout<<"Enter number of elements"<<endl;
    cin>>n;

    cout<<"Enter your elements"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Your elements is:"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter item to search"<<endl;
    cin>>item;
    beg=1;
    en=n;
    mid=(beg+en)/2;
    while(beg<=en && a[mid]!=item)
          {
            if(a[mid]<item)
              beg=mid+1;
            else
             en= mid-1;
          }
    if(a[mid]==item)
       {
         cout<<"\nItem found at location\t" <<mid;
       }

    else
        cout<<"\nNumber not found";


    return 0;
}

