#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

 ll n;
 cin>>n;
 ll arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }

 //sort the array
  for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-1-i; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
 if(n%2!=0)
 {
     cout<<arr[n/2]<<endl;
 }
 else
 {
     cout<<arr[(n/2)-1]<<endl;
 }

}

