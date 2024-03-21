#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;

        vector<int> V;
        for(int i =0;i<N;i++)
        {
            int val;
            cin >> val;
            V.push_back(val);
        }
        sort(V.begin(),V.end());

        auto it = unique(V.begin(),V.end());
        V.erase(it,V.end());
        for(int val:V)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}