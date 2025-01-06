#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type 1
    cout<<"Type -1 "<<endl;
    vector<int> v;
    cout<<v.size()<<endl;

    // type 2
    cout<<"Type-2"<<endl;
    vector<int> v2(5);
    cout<<v2.size()<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    // type 3
    cout<<"Type-3"<<endl;
    vector<int> v3(5,33);
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    //type 4
    cout<<"Type -4"<<endl;
    vector<int> v4(v3);
    for(int i=0;i<v4.size();i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;

    //type 5
    cout<<"Type-5"<<endl;
    int a[6] = {1,2,3,4,5,6};

    vector<int> v5(a,a+6);
    for(int i=0;i<v5.size();i++)
    {
        cout<<v5[i]<<" ";
    }
    cout<<endl;
    
    // type 6
    cout<<"Type -6"<<endl;
    vector<int> v6={3,6,9};
    cout<<v6.size()<<endl;
    for(int i=0;i<v6.size();i++)
    {
        cout<<v6[i]<<" ";
    }
    cout<<endl;

    return 0;
}