#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string val;
    Node * next;
    Node * prev;

    Node(string& val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
        tmp=tmp->prev;
    }
    cout << endl;
}
void insert_tail(Node* &head,Node * &tail,string & val)
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
    newNode->prev = tail;
    tail = tail->next;
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    string val;
    while(true)
    {
        cin >> val;
            if(val == "end")
            {
                break;
            }
        insert_tail(head,tail,val);
    }
    int Q;
    cin >> Q;
    Node * cur = head;
    for(int i=0;i<Q;i++)
    {
        string C;
        cin >> C;
        if(C== "visit")
        {
            string A;
            cin >> A;
            Node * tmp = head;
            while(tmp!=NULL)
            {
                if(tmp->val == A)
                {
                    cout << A << endl;
                    cur = tmp;
                    break;
                }
                tmp = tmp->next;
            }
            if(tmp == NULL)
            {
                cout << "Not Available" << endl;
            }
        }
            else if(C=="prev")
            {
                if(cur->prev != NULL)
                {
                    cur = cur->prev;
                    cout << cur->val << endl;
                }
                else
                {
                    cout << "Not Available" << endl;
                }
            
            }
            else if(C == "next")
                {
                if(cur->next != NULL)
                {
                    cur = cur->next;
                    cout << cur->val << endl;
                }
                else
                {
                    cout << "Not Available" << endl;
                }
        }
    }
    
    
    return 0;
}