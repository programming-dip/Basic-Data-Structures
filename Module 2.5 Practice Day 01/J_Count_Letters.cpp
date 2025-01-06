//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>v(26);
    string::iterator it;
    for(it=s.begin();it<s.end();it++)
    {
        int x;
        x=*it-'a';
        v[x]++;
    }


    for(int i=0;i<26;i++)
    {
        if(v[i]>0) cout<<char('a'+i)<<" : "<<v[i]<<endl;
    }
    return 0;
}