#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int arr2[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int sum[5][5];
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            sum[i][j]= arr1[i][j]+arr2[i][j];
        }
    }
     for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}