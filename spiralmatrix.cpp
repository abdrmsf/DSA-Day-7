#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<vector<int> >arr(n,vector<int>(n,0));
for(int i=0;i<arr.size();i++)
{
    for(int j=0;j<arr[i].size();j++)
    {
        cin>>arr[i][j];
    }
}
int total=n*n;
int t=0;

while(total>0)
{
    int i=t;
int j=t;
    while(j<n-t)
    {
        cout<<arr[i][j]<<" ";
        total--;
        j++;
    }
    j--;
    i++;
    while(i<n-t)
    {
        cout<<arr[i][j]<<" ";
        total--;
        i++;
    }
    i--;
    j--;
    while(j>=t)
    {
        cout<<arr[i][j]<<" ";
        total--;
        j--;
    }
    j++;
    i--;
    while(i>t)
    {
        cout<<arr[i][j]<<" ";
        total--;
        i--;
    }
    t++;
}
/* for(int i=0;i<arr.size();i++)
{
    for(int j=0;j<arr[i].size();j++)
    {
        cout<<arr[i][j]<<" ";
    }
cout<<endl;
} */
return 0;
}