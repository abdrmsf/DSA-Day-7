#include<iostream>
#include<vector>
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
    int t=0;
    int k=t+1;
    while(t<n)
    {
        int j=0;
        int i=t;
        while(j<=t)
        {
            cout<<arr[i][j]<<" ";
            j++;
            i--;
        }
    t++;
    }
    while(k<n)
    {
        int j=k;
        int i=n-1;
        while(j<n)
        {
            cout<<arr[i][j]<<" ";
            i--;
            j++;
        }
    k++;
    }
    
return 0;  
}