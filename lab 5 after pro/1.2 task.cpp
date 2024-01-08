#include<bits/stdc++.h>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5};
    vector<int>::iterator it; //declare iterator
    for (it = arr.begin(); it < arr.end(); it++)
    {

        cout << *it << " ";

    }
    cout <<endl;
    it=arr.erase(arr.begin()+2);//deleting 3rd elemnet
    for (it = arr.begin(); it < arr.end(); it++)
    {

        cout << *it << " ";

    }
    return 0;
}
