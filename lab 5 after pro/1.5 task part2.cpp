#include<bits/stdc++.h>
using namespace std;
void insert(int n,int arr[])
{

    int i,pos,value;
    cin>>pos>>value;
    for(i=n; i>=pos; i--)
    {
        arr[i]=arr[i-1];

    }
    arr[pos-1]=value;

    for(i=0; i<n+1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void count(int n, int arr[])
{

    int i,flag=0,value;
    cin>>value;
    for(i=0; i<n; i++)

    {
        if(arr[i]==value)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<value<<" is present";
    }
    else
    {
        cout<<value<<" isn't present";
    }

}
int main()
{

    int n,i;
    int arr[10000];;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    insert(n,arr);
    count(n,arr);
}
