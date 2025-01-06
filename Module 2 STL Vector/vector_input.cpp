#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    // first type
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int val:v)
    {
        cout<<val<<" ";
    }



    // second type
    int m;
    cin>>m;
    vector<int> v2(m);
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }

    for(int val:v2)
    {
        cout<<val<<" ";
    }
    return 0;
}