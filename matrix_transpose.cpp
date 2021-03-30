#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int transpose=0;
    for(int i=0;i<5;i++)
    {
        transpose += arr[i][i];
    }
    cout<<transpose<<endl;

    return 0;
}