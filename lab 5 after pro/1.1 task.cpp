#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{   vector<int>v;
    int element;
    //push back
    for(int i=1; i<=5; i++)
    {
        cin>>element;
        v.push_back(element);
    }
    for(int i=0; i!=v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //pop back
    v.pop_back();
    for(int i=0; i!=v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    //insert
    v.insert(v.begin()+1,99);
    cout<<endl;
    for(int i=0; i!=v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    //erase
    v.erase(v.begin()+3);//4 no ta
        cout<<endl;
    for(int i=0; i!=v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
