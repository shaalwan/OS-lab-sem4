#include<bits/stdc++.h>
using namespace std;

int main()
{cout<<"Enter number of rows in matrix1:";
    int rows1;cin>>rows1;
    cout<<"Enter number of columns in matrix1:";
    int columns1;cin>>columns1;
    int arr1[rows1][columns1];
    cout<<"Enter number of rows in matrix2:";
    int rows2;cin>>rows2;
    cout<<"Enter number of columns in matrix2:";
    int columns2;cin>>columns2;
    int arr2[rows2][columns2];

    if(columns1!=rows2)//condition to check if multiplication is possible.
    {
        cout<<"numbers of rows in matrix1 is not equal to number of columns in matrix2 so matrix multiplication is not possible";
        return 0;
    }

     cout<<"enter elements of matrix1 (row-wise)";
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns1;j++)
            cin>>arr1[i][j];
    }
     cout<<"enter elements of matrix2 (row-wise)";
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<columns2;j++)
            cin>>arr2[i][j];
    }

    int multiplication[rows1][columns2];
    memset(multiplication,0,sizeof(multiplication));//set all elements as 0 initially.

    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            for(int k=0;k<rows2;k++)
            {
                multiplication[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
cout<<"resulting matrix is:"<<endl;
     for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            cout<<multiplication[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}