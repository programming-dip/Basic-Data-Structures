// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/duplicate-12
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   
    sort(a,a+n);

    for(int i=1;i<n;i++)
    {
       if(a[i]==a[i-1])
       {
        cout<<"YES"<<endl;
        return 0;
       }
    }

    cout<<"NO"<<endl;  
        
    return 0;
}