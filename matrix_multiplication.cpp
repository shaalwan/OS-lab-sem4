#include<bits/stdc++.h>
using namespace std;

int main()
{
    int multiplication[5][5];
    int arr1[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int arr2[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            multiplication[i][j]=0;
            for(int k=0;k<5;k++)
            {
                multiplication[i][j]+=arr1[i][k]*arr2[k][j]; 
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<multiplication[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}