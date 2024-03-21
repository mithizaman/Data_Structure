#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while(T--)
    {
        string s;
        getline(cin,s);

        map<string, int> wordC;

        string word;
        stringstream ss(s);

        string a;
        int maxC = 0;

        
        while(ss >> word)
        {
            wordC[word]++;

            if(wordC[word] > maxC)
            {
                a = word;
                maxC = wordC[word];
            }
        }

    cout << a << " " << maxC << endl;
    }
    return 0;
}