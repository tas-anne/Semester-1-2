#include<bits/stdc++.h>
#include<utility>
using namespace std;
bool sort_sec(const pair<int,int> &p1,const pair<int,int> &p2)
{
    return (p1.second < p2.second);
}
int main()
{
    vector<pair<int,int>>vp;//vector of pairs
    //push back element in vector
    vp.push_back(make_pair(1,50));
    vp.push_back(make_pair(5,30));
    vp.push_back(make_pair(3,20));
    vp.push_back(make_pair(9,10));
    vp.push_back(make_pair(-2,90));
    vp.push_back(make_pair(-7,-60));
    vp.push_back(make_pair(2,100));
    // before sorting
    for(int i=0;i<7;i++)
    {
        cout<<vp[i].first<<" || "<<vp[i].second<<endl;
    }
    cout<<endl<<"----X----"<<endl;
    //sort in ascending
    sort(vp.begin(), vp.end(), sort_sec);
     // after sorting
    for(int i=0;i<7;i++)
    {
        cout<<vp[i].first<<" || "<<vp[i].second<<endl;
    }
}




