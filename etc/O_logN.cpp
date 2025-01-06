#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // O(logN)
    while(n>0)
    {
        int digit=n%10;
        cout<<digit<<endl;
        n/=10;
    }

    // O(logN)

    int m;
    cin>>m;
    for(int i=1;i<=m;i*=2)
    {
        cout<<i<<endl;
    }
    return 0;
}