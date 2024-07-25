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
vector<int>arr(n);
for(int i=0;i<arr.size();i++)
{
    cin>>arr[i];
}
int start=0;
int end=arr.size()-1;
int i=0;
while(i<=end)
{
    if(arr[i]==0)
    {
        swap(arr[i],arr[start]);
        i++;
        start++;
    }
    else if(arr[i]==1)
    {
        i++;
    }
    else
    {
        swap(arr[i],arr[end]);
        end--;
    }
}
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}