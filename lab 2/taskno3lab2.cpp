#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int b[1000000];
int main()
{
    int m,j;
    cin>>m;
     //copy the array at b[100000]
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
            if(a[i]==b[j])//element koto pos e ache milate
            {
                // printf("p=%d\n",p);
                if(p!=j)
                {
                    printf("%d ",j);
                    p=j;//ar ekta variable e store korchi
                    break;


                }
                else
                {
                    j++;//jodi age ekbar thake,porerta te jawar jonno

                }


            }
            j++;

        }
    }
}

