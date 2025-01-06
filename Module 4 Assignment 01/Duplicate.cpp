#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    bool flag=false;

    for(int i=0;i<n;i++)
    {
        int l=0;
        int r=n-1;
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            //cout<<mid<<endl;
            if (mid == i) {
                if (a[mid] < a[i]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
                continue;
            }

            if(a[mid] == a[i])
            {
                flag=true;
                // cout<<"Flag @ "<<i<<" index"<<endl;
                // cout<<a[mid]<<" = "<<a[i]<<endl;
                // cout<<"mid "<<mid<<endl;
                // cout<<"n :"<<n<<endl;
                break;
            }
            else if(a[mid]<a[i])
            {
                l=mid+1;
            }
            else if(a[mid]>a[i])
            {
                r=mid-1;
            }
        }

        if(flag ==true)
        {
            cout<<"YES";
            break;
        }
    }

    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}