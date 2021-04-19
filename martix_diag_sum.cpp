#include<bits/stdc++.h>
using namespace std;

int main()
{

    cout<<"Enter number of rows in matrix:";
    int rows;cin>>rows;
    cout<<"Enter number of columns in matrix:";
    int columns;cin>>columns;
    int arr[rows][columns];
    if(rows!=columns)//condition to check if we have a primary diagonal.
    {
        cout<<"Given matrix is not a square matrix. so no primary diagonal exists";
        return 0;
    }
    cout<<"enter elements of matrix (row-wise)";
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<rows;i++)
    {
        sum += arr[i][i];
    }
    cout<<"sum of diagonal elements of given matrix is: "<<sum;
    return 0;
}