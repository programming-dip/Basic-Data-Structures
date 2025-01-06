//https://www.hackerrank.com/contests/assignment-01-a-basic-data-structures-a-batch-03/challenges/printing-x

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mid = n/2;
    int fSp=0;
    int mSp=n-2;
    for(int i=0; i<n;i++)
    {
        
        
        if(i<mid)
        {
            for(int j=0;j<fSp;j++)
        {
            cout<<" ";
        }
        cout<<'\\';
        for(int k=0;k<mSp;k++)
        {
            cout<<" ";
        }
        cout<<"/"<<endl;
            fSp++;
            mSp-=2;
        }


        else if(i== mid)
        {
            for(int j=0;j<fSp;j++)
        {
            cout<<" ";
        }
            cout<<"X";

            for(int j=0;j<fSp;j++)
        {
            cout<<" ";
        }
        fSp--;
        mSp+=2;
        cout<<endl;
        }


        else if (i>mid)
        {
            for(int j=0;j<fSp;j++)
        {
            cout<<" ";
        }
        cout<<'/';
        for(int k=0;k<mSp;k++)
        {
            cout<<" ";
        }
        
        cout<<"\\"<<endl;
            fSp--;
            mSp+=2;
        }
    

    }  
    return 0;
}