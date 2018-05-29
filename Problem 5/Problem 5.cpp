#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],i,j,k,sum=0,ab[3][3],m,n;
    cout<<"Enter your raw and coloumn"<<endl;
    cin>>m>>n;

    cout<<"Enter your element of matrix a"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Your element of a is"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter your element of b"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>b[i][j];
        }
    }

    cout<<"Your element of b is"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }


   for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                sum=0;
                for(k=0;k<n;k++){
                    sum=sum+a[i][k]*b[k][j];
        }
        ab[i][j]=sum;
    }
   }
    cout<<"Your multiplication a*b is"<<endl;

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                cout<<ab[i][j]<<"\t";
        }
        cout<<endl;
     }

    return 0;

}

