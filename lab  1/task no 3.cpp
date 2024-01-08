#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + t);

    int max = 1, ans = arr[0], curr = 1;
    for (int i = 1; i < t; i++)
    {
        if (arr[i] == arr[i - 1])
            curr++;
        else
        {
            if (curr > max)
            {
                max = curr;
                ans = arr[i - 1];
            }
            curr = 1;
        }
    }

    if (curr > max)
    {
        max = curr;
        ans = arr[t - 1];
        cout<<ans<<endl;
    }
    else
    {
        cout<<ans<<endl;;
    }
}
