//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int numCnt=0;

    for(int i=0;i<n;i++)
    {
        vector<int>::iterator it=find(v.begin(),v.end(),v[i]+1);
        if(it==v.end()) {numCnt+=0;}
        else numCnt+=1;

    }

    cout<<numCnt;
    return 0;
}