#include<bits/stdc++.h>
using namespace std;
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
    int arr[]= {2,7,15,15,15,26,40};
    int x=15;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {

    }
    int result=last_occ(arr,0,n-1,x);

    printf("Element is present at index: %d",result+1 );
    return 0;


}

