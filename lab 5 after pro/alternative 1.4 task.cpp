#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<int,int>m;
    cout << " Initially m.empty(): " << m.empty() << "\n";//to check whether the map container is empty or not
    //insert

    m[2]=20;
    m[3]=50;
    m[4]=60;
    m[6]=70;
    m[7]=40;
    m[5]=30;//(key,value)

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
    cout << "\n After adding elements m.empty(): " << m.empty() << "\n";

}

