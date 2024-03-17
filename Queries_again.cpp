#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node * next;
    Node * pre;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
    }
};
void print_normal(Node * head)
{
    Node * tmp=head;
    while(tmp!=NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
    cout << endl;
}
void print_reverse(Node * tail)
{
    Node * tmp=tail;
    while(tmp!=NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->pre;
    }
    cout << endl;
}
void insert_position(Node * head, int pos, int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i =1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->pre = newNode;
    newNode->pre = tmp;
}
int size(Node * head)
{
    Node * tmp = head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_head(Node * &head,Node * &tail ,int val)
{
    Node * newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->pre = newNode;
    head = newNode;
}
void insert_tail(Node* &head,Node * &tail,int val)
{
    Node * newNode = new Node(val);
    {
        while(tail==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = tail->next;
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    int Q;
    cin >> Q;
    for(int q=0;q<Q;q++)
    {

    int pos;
    int val;
    cin >> pos >> val;


    if(pos>size(head))
    {
        cout << "Invalid" << endl;
        continue;
    }
    else if(pos==0)
    {
        insert_head(head,tail,val);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,val);
    }
    else 
    {
        insert_position(head,pos,val);
    }
    cout << "L -> ";
    print_normal(head);
    cout << "R -> ";
    print_reverse(tail);
    }
    return 0;
}