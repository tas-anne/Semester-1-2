#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }



    //check if it is sorted or not
    int c=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            c++;
            break;
        }
    }



//if not sorted
    if(c)
    {
        printf("NO\n");

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
        //sorted array print
        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }



    //if sorted
    else
    {
        printf("YES\n");
    }
}
