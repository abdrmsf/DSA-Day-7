#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
int n,key;
cin>>n>>key;
vector<int>arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int start=0;
int end=arr.size()-1;
int i=0;
int count=0;
while(start<=end)
{
    int mid=(start+end)/2;
    if(arr[mid]==key) 
    {
        count=-1;
        break;
    }
    else if(arr[mid]>key)
    {
        end=mid-1;
    }
    else
    {
        start=mid+1;   
    }
}
if(count==0)
{
    cout<<"Not Found"<<endl;
}
else
{
    cout<<"Found"<<endl;
}
return 0;
}