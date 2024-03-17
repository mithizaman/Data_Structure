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

bool Palindrome(Node * head)
        {
            if(head == NULL)
            {
                return false;
            }
            Node * tmp1 = head;
            Node * tmp2 = head;
            while(tmp2->next != NULL)
            {
                tmp2 = tmp2->next;
            }
            while(tmp1 != NULL)
            {
                if(tmp1->val != tmp2->val)
                {
                    return false;
                }
                tmp1 = tmp1->next;
                tmp2 = tmp2->pre;
            }
                return true;
        }
    

int main()
{
    Node * head = NULL;
    Node * tail =NULL;

    int val;
    cin >> val;
    while(val != -1)
    {
        Node * newNode = new Node(val);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else 
        {
            tail->next = newNode;
            newNode->pre = tail;
            tail = newNode;
        }
        cin >> val;
    }
    if(Palindrome(head))
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}