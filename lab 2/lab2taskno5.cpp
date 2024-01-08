#include <bits/stdc++.h>
using namespace std;

struct stu_info
{
    string name;
    int mch,data,net,total,ranking;

};


bool compare(stu_info a, stu_info b)
{
    //jokhon total same na
    if (a.total != b.total )
        return a.total > b.total;

//jokhon total same
    if (a.mch != b.mch)
        return a.mch > b.mch;

//else
    return (a.data > b.data);
}
int main()
{
    int n;
    cin>>n;
    stu_info arr[n];

    //student information input
    for(int i=0; i<n; i++)
    {

        cin>>arr[i].name;
        cin>>arr[i].mch  ;
        cin>> arr[i].data  ;
        cin>> arr[i].net ;
    }

    //total number count
    for (int i=0; i<n; i++)
        arr[i].total = arr[i].mch + arr[i].data + arr[i].net;

    //sorting in descending order
    sort(arr, arr+5, compare);

    //rank={1,2,3,4,5,...}
    for (int i=0; i<n; i++)
        arr[i].ranking = i+1;



//print result
   cout<<"Sample output: "<<endl;
    for (int i=0; i<n; i++)
    {
        cout << arr[i].ranking << " ";
        cout << arr[i].name << " ";
        cout <<"\n";
    }

    return 0;
}

