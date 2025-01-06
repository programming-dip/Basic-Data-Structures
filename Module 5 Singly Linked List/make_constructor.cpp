#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
        int val;
        Node * next;

    Node(int val)
    {
        this->val =val;
        this->next = NULL;
    }    
};

int main()
{
    Node a(10), b(20);
    a.next=&b;

    // print value of a
    cout<<a.val<<endl;

    // print valude of b using b
    cout<<b.val<<endl;

    // print value of b using a node
    cout<<(*a.next).val<<endl;

    // shortcut using a node
    cout<<a.next->val<<endl;

    return 0;
}