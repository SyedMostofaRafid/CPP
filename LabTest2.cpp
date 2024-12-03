#include<bits/stdc++.h>
using namespace std;
struct Block
{
    public:
    int val;
    Block*next;
    Block*prev;

    Block(int val)
    {
        this->val=val;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
struct myQueue
{
    Block*head=nullptr;
    Block*tail=nullptr;
    void push(int val)
    {
        Block*newNode=new Block(val);
        if(head==NULL)
        {
        head=newNode;
        tail=newNode;
        return;    
        }newNode->=head;
        head->prev=newNode;
        head= newNode;
    }
    void pop()
    {
        Block*deleteNode=tail;
        tail=tail->prev;
        if(tail==NULL)
        {
            head= NULL;
            return;
        }
        else
        {
            tail->next=NULL;
        }
        delete deleteNode
    }
};
int main()
{
    
}