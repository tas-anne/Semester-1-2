#include<stdio.h>
#include<string.h>
#define ll long long int
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            printf("NEITHER ODD NOR EVEN\n");
        }
        else
        {

            if(n &1)
            {
                printf("ODD\n");
            }
            else
            {
                printf("EVEN\n");
            }
        }
    }
}
