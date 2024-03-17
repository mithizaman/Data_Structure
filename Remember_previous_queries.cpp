#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    list<int> myList;

    for(int i=0;i<Q;i++)
    {
        int X,V;
        cin >> X >> V;
        if(X==0)
        {
            myList.insert(myList.begin(),V);
        }
        else if(X==1)
        {
            myList.push_back(V);
        }
        else if(X==2)
        {
            int size_myList = myList.size();
            if(V< size_myList)
            {
                auto it = myList.begin();
                for(int j=0;j<V;j++)
                {
                    it++;
                }
                myList.erase(it);

            }
        }
        cout << "L -> ";
    for(int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "R -> ";
    for(auto it = myList.rbegin();it != myList.rend();it++)
    {
        cout << *it << " ";
    }
        cout << endl;
    }
    return 0;
}
