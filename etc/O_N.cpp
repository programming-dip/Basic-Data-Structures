#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    // O(n)
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int s=0;
    for(int i=0;i<n;i+=2)
    {
        s+=a[i];
    }

    cout<<s<<endl;
    return 0;
}