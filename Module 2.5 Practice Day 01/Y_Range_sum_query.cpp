#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>A(n);

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        x-=1,y-=1;
        int sum=0;
        for(int j=x;j<=y;j++)
        {
            sum+=A[j];
        }

        cout<<sum<<endl;

    }
    return 0;
}