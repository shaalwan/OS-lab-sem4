#include<bits/stdc++.h>
using namespace std;

int main()
{cout<<"Enter number of rows in matrix:";
    int rows;cin>>rows;
    cout<<"Enter number of columns in matrix:";
    int columns;cin>>columns;
    int arr[rows][columns];
     cout<<"enter elements of matrix (row-wise)"<<endl;;
    for(int i=0;i<rows;i++)
        for(int j=0;j<columns;j++)
            cin>>arr[i][j];

    int arrt[columns][rows];
    for(int i=0;i<columns;i++)
        for(int j=0;j<rows;j++)
            arrt[i][j]=arr[j][i];
    cout<<"transpose matrix is:"<<endl;
    for(int i=0;i<columns;i++)
    {
        for(int j=0;j<rows;j++)
            cout<<arrt[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}