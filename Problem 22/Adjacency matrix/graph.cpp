#include<iostream>
using namespace std;

int a[100][100];
int main(){
    int i,j,edge,vertex,s,d;
    cout<<"enter your number of edge"<<endl;
    cin>>edge;
    cout<<"enter your number of vertex"<<endl;
    cin>>vertex;

    cout<<"enter your sourse and distribution:"<<endl;

    for(i=0;i<edge;i++){
            cin>>s>>d;
            a[s][d]=1;
            a[d][s]=1;
        }

    for(i=0;i<vertex;i++){
        for(j=0;j<vertex;j++){
            cout<<a[i][j]<<" ";
        }

       cout<<endl;
    }
    return 0;
}

/*
9
7

0 1
0 2
0 4
1 2
1 4
1 5
3 5
3 4
2 3

*/
