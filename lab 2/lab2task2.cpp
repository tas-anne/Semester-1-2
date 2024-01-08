#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n];
        int p=n-m;
        //taking the array
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //bubble sort
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1-i; j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
            }
        }
        int s=0,s1=0;
        //maximum 4 elements' sum
        for(int i=n-1;i>=n-p;i--)
        {
            s=s+a[i];
        }
        //minimum sum
        for(int i=0;i<p;i++)
        {
            s1=s1+a[i];
        }
        cout<<s-s1<<endl;


    }
}
