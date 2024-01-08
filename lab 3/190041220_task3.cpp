#include<bits/stdc++.h>
using namespace std;
int first_occ(int arr[],int l,int r,int x)
{
    int res=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==x)

        {
            res=m;
            r=m-1;
        }

        if(arr[m]<x)

            l=m+1;

        else
            r=m-1;
    }
    return res;
}
int last_occ(int arr[],int l,int r,int x)
{
    int res=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==x)

        {
            res=m;
           l=m+1;
        }

        if(arr[m]>x)

            r=m-1;

        else
            l=m+1;
    }
    return res;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[100000];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    int result=first_occ(a,0,n-1,x);
    int ans=last_occ(a,0,n-1,x);
    cout<<"First occ:"<<result<<endl;
    cout<<"last occ:"<<ans<<endl;
    return 0;


}
