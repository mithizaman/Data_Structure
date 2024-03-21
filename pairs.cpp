#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int marks;
};
class cmp
{
    public:
    bool operator()(Student a, Student b)
    {
        if(a.name != b.name)
        {
            return a.name > b.name;
        }
        else
        {
            return a.marks < b.marks;
        }
    }
};

int main()
{
    int N;
    cin >> N;

    priority_queue<Student,vector<Student>,cmp> pq;

    for(int i=0;i<N;i++)
    {
        string name;
        int marks;
        cin >> name >> marks;
        pq.push(Student{name,marks});
    }

    while(!pq.empty())
    {
        Student s = pq.top();
        cout << s.name << " " << s.marks << endl;
        pq.pop();
    }
    return 0;
}