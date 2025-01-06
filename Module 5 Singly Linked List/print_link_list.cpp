#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * next;

        Node(int val)
        {
            this->val=val;
            this->next= NULL;
        }
};

int main()
{

    Node *head=new Node(10);
    Node *a=new Node(20);
    head->next=a;
    Node *b=new Node(30);
    a->next=b;
    Node *c=new Node(40);
    b->next=c;
    Node *d=new Node(50);
    c->next=d;


    Node *tmp=head;
    //print
    while(tmp!=NULL)
    {
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }


    // for(int i=0;i<5;i++)
    // {
        
    // }
    return 0;
}