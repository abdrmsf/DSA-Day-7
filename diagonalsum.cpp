#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,total=0;
    cin>>n;
    vector<vector<int> >arr(n,vector<int>(n,0));
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            if(i==j)
            {
                total=total+arr[i][j];
                break;
            }
        }
    }
    cout<<total;
    return 0;
}