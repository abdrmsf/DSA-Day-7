#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int secondlargest(vector<int>arr,int greatest)
{
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>maxi && arr[i]<greatest)
        {
            maxi=arr[i];
        }
    }
    return maxi;
}
int largest(vector<int>arr)
{
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    return maxi;
}
int main()
{
int n;
cin >> n;
vector<int>arr(n);
for(int i=0;i<arr.size();i++)
{
    cin>>arr[i];
}
int greatest=largest(arr);
cout<<secondlargest(arr,greatest)<<endl;
return 0;
}