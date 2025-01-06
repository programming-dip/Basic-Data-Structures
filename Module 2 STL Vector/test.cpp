#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    
    int m;
    cin>>m;
    vector<int> v2(m);
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    for(int i=0;i<m;i++)
    {
        cout<<v2[i]<<" ";
    }
}