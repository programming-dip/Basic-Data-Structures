#include<bits/stdc++.h>
using namespace std;

void printpattern(int n)
    {

    int fSp=0;
    int mSp=n-2;
    int mid=n/2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<fSp;j++)
        {
            cout<<" ";
        }
        if (i<mid)
        {            
        cout<<"\\";

        for(int k=0;k<mSp;k++)
        {
            cout<<" ";
        }

        cout<<"/";
        fSp++;
        mSp-=2;
        }



        if (i==mid)
        {
            cout<<"X";
            fSp--;
            mSp+=2;
        }

        if (i>mid)
        {
            cout<<"/";
            for(int k=0;k<mSp;k++)
            {
                cout<<" ";
            }
            cout<<"\\";

            fSp--;
            mSp+=2;
        }


    cout<<endl;
    }
        
    }  
int main()
{
    int n;
    cin>>n;
    printpattern(n);
    
    
    return 0;
}