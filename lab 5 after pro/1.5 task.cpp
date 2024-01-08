#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    set<int,greater<int>>s;
    set<int,greater<int>>::iterator it;//descending order
    s.insert(50);
    s.insert(40);
    s.insert(30);
    s.insert(30);
    s.insert(60);
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
     if (s.count(40))
        cout << "40 is present in the set\n";
    else
        cout << "40 is not present in the set\n";
}
