#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<v.max_size()<<endl;
    // capacity increases double by every pushback
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(20);
    cout<<v.capacity()<<endl;
    v.push_back(30);
    cout<<v.capacity()<<endl;
    v.push_back(40);
    cout<<v.capacity()<<endl;
    v.push_back(50);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // clear function doesn't delte the values in memory just clear the size and ignores the values in the memory (Uncomment the following lines)
    //v.clear();
    //cout<<v.size()<<endl;
    //cout<<v[0]<<endl;


    // resize function 
    v.resize(2);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;



    v.resize(7);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}