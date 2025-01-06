// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    
    // input of a
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //input of b
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    //assigning b to c after b input is compleate
    vector<int>c=b;

    // vector insert 
    c.insert(c.end(),a.begin(),a.end());

    for(int val:c)
    {
        cout<<val<<" ";
    }
    
    return 0;
}
