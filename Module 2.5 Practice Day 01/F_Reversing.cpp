//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //vector reverse function
    reverse(a.begin(),a.end());

    for(int val:a)
    {
        cout<<val<<" ";
    }


    return 0;
}