#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,card;
    cin>>t;
    int arr[10000];
    for( i=1; i<=10; i++)
    {
        arr[i]=arr[i-1]+i-1+2*i;
        cout<<arr[i]<<endl;
    }
    while(t--)
    {
        cin>>card;
        int ans=0;
        while(card>1)
        {
            int i=upper_bound(arr,arr+10,card)-arr;
            cout<<"i= "<<i<<endl;
            i--;
            card=card-arr[i];
            cout<<"card= "<<card<<endl;
            ans++;
        }
        cout<<"ans= "<<ans<<endl;
    }
}
