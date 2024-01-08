#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int b[1000000];
int main()
{
    int m,j;
    cin>>m;

    for(int i=0; i<m; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+m);
    int p=10000000;
    for(int i=0; i<m; i++)
    {
        j=0;
        while(j<m)
        {
            if(a[i]==b[j])
            {
                // printf("p=%d\n",p);
                if(p!=j)
                {
                    printf("%d ",j);
                    p=j;
                    break;


                }
                else
                {
                    j++;

                }


            }
            j++;

        }
    }
}
