#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v;
    for(int i=0;i<N;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    priority_queue<int, vector<int>,greater<int>> p;
   
    for(int i=0;i<N;i++)
    {
        p.push(v[i]);
    }
    int q;
    cin >> q;

    while(q--)
    {
        int c;
        cin >> c;

        if(c==1)
        {
            if(!p.empty())
            {
                cout<< p.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if(c==2)
        {
            if(!p.empty())
            {
                p.pop();
                if(!p.empty())
                {
                    cout << p.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if(c==0)
        {
            int x;
            cin >> x;
            p.push(x);
            cout << p.top() << endl;
        }
    }

    return 0;
}