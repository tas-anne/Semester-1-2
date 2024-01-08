#include<stdio.h>
int main()
{
    int n,a,max=0,ans;
    int frequency[100000]= {0};
    scanf("%d",&n);
    //koy bar ache count
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a);
        frequency[a]++;

    }
    for(int i=0;i<n;i++)
    {
        if(max<frequency[i])
        {
            max=frequency[i];
            ans=i;
        }
    }
    printf("%d",ans);
}
