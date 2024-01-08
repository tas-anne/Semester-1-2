#include<bits/stdc++.h>
using namespace std;
void erase(int arr[],int ele_index)
{
    for(int i=ele_index-1; i<10; i++)
    {
        arr[i]=arr[i+1];//ekta for loop niye joto no ta delete korbo tar porer gula ek kore index kombe
    }
    for(int i=0; i<10-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insert(int arr[],int pos,int element)
{
    if(pos>10)
    {

        cout<<"Invalid ";
    }
    else
    {
        for(int i=10; i>=pos; i--)
        {
            arr[i]=arr[i-1];//sesh theke je pos e new value add hobe tar ag porjonto arrayr ager value ta
                            // agabe, ager ta pore jabe ek pos
        }
        arr[pos-1]=element;

        for(int i=0; i<10+1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
}
void pushback(int arr[])
{

    int val,i;
    cin>>val;//enter value
    arr[10]=val;//last position e value add
    for(i=0; i<=10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
void pop_back(int arr[])
{
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";//sesh er ta print na korlei baad
    }
    cout<<endl;
}
int main()
{
    int arr[10]= {0,1,2,3,4,5,6,7,8,9};
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int choice;
    cin>>choice;
    if(choice==1)
    {
        int ele_index;
        cin>>ele_index;//the index number of the element to delete
        erase(arr,ele_index);

    }

    if(choice==2)
    {
        int pos,element;
        cin>>pos>>element;
        insert(arr,pos,element);

    }

    // pop_back(arr);
    // pushback(arr);


}
