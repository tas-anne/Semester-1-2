#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int card;
        cin>>card;
        int ans=0,n,count=0;
        if(card==1)
        {
            cout<<0<<endl;
        }
        else
        {
            while(card>1)
            { n=1;
                while(ans<=card)
                {
                    ans=n*(n+1)+(n*(n-1))/2;
                    n++;

                }
                n=n-2;
                ans=n*(n+1)+(n*(n-1))/2;
                if(ans>1 && card>=ans)
                {
                    card=card-ans;
                    count++;
                }
            }

           // cout<<ans<<endl;

            cout<<count<<endl;
        }
    }

}
