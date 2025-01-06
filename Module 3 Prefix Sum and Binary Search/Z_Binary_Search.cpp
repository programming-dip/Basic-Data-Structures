// https://codeforces.com/group/MWSDmqGsZm/contest/219774/submit
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    
    while(q--)
    {
        int x;
        cin>>x;
        int l=0;
        int r=n-1;
        bool flag=false;
        
        //binary search
        while(l<=r)
        {
            int mid = (l+r)/2;

            if(x==a[mid])
            {
                flag=true;
                break;
            }

            else if(x>a[mid])
            {
                l=mid+1;
            }
            else if(x<a[mid])
            {
                r=mid-1;
            }
        }

        if(flag==true) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}