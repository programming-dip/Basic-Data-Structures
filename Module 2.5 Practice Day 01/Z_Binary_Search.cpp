//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;

        vector<int>:: iterator it = find(a.begin(),a.end(),x);
        (it!=a.end())? cout<<"found"<<endl : cout<<"not found"; 
    }
    return 0;
}