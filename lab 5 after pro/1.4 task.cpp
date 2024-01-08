#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<int,int>m;
    cout << " Initially m.empty(): " << m.empty() << "\n";//to check whether the map container is empty or not
    //insert
    m.insert({2,20});//(key,value)
    m.insert({3,50});
    m.insert({4,60});
    m.insert({6,70});
    m.insert({7,40});
    m.insert({5,30});
    for(auto it: m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl<<"----"<<endl;
    //erase
    m.erase(2);
    m.erase(6);
    for(auto it: m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl<<"---"<<endl;
    //find function
    auto it = m.find(5);
    auto it1 = m.find(4);
    if (it != m.end())
    {
        cout << it->second << '\n';
        cout << it1->second << '\n';
    }
    cout << "\n After adding elements, m.empty(): " << m.empty() << "\n";

}
