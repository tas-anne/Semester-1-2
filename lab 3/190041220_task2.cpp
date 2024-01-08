#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int binarysearch(int arr[1000][1000],int x,int row,int col)
{
    int l=0;
    int r=row*col -1;

    while(l<=r)
    {
        int mid=(l+r)/2;
        int i=mid/col;
        int j=mid%col;

        if(arr[i][j]==x)

            return 1;

        if(arr[i][j]<x)

            l=mid+1;

        else
            r=mid-1;
    }
    return -1;
}
int main()
{

    int k,m,n;
    cin>>m>>n>>k;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int result=binarysearch(a,k,n,m);
    (result==-1)?printf("FALSE\n"):printf("TRUE\n" );
    return 0;


}
