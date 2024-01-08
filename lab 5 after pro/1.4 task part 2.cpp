#include<bits/stdc++.h>
using namespace std;
void find(int a[], int k)
{
    int i,flag=0;;
    for(i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
        cout<<"Key not found"<<endl;
    else
        cout<<"Key found at index "<<i<<endl;
}

void empty(int a[],int arr[])
{
    int i,count=0,flag=0;
    for(i=0; i<n; i++)
    {
        if(a[i]!='\0')
            count++;
        if(count==0)
            cout<<"Empty"<<endl;
        else
        {
            cout<<"Not empty"<<endl;
        }
    }
}
