#include<bits/stdc++.h>
using namespace std;

int upper_Bound(int arr[], int N, int X)
{
    int m;
    int l = 0;
    int r = N;
    while (l < r)
    {

        m = l+ (r- l) / 2;

        if ( arr[m]<=X)
        {
            l = m + 1;
        }


        else
        {
            r = m;
        }
    }


    return l;
}


int main()
{
    int t,i,card;
    cin>>t;
    int arr[10000];

    //{2,7,15,....}
    for( i=1; i<=10000; i++)
    {
        arr[i]=arr[i-1]+i-1+2*i;
        //cout<<arr[i]<<endl;
    }
    while(t--)
    {
        cin>>card;
        int ans=0;
        while(card>1)
        {
            int i=upper_Bound(arr,10000,card);
            //cout<<"i= "<<i<<endl;
            i--;
            card=card-arr[i];
            //cout<<"card= "<<card<<endl;
            ans++;
        }
        cout<<ans<<endl;
    }
}

