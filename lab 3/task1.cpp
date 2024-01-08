#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int l,int r,int x)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==x)

            return m;

        if(arr[m]<x)

            l=m+1;

        else
            r=m-1;
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
     int result=binarysearch(arr,0,n-1,x);
    (result==-1)?printf("NOT FOUND\n"):printf("FOUND\n" );
    return 0;


}
