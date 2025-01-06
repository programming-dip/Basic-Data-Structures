//https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/sorted-2-2/problem

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        vector<int>b=a;
        sort(a.begin(),a.end());

        if(b==a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}