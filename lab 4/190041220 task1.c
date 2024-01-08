#include<stdio.h>
void printEven1(int num)//n even er jonno
{
    if(num<=0)
    {
        printf("%d ",num);
        return;
    }
    else
    {
        printEven1(num-2);
        printf("%d ",num);
    }
    return ;
}
void printEven2(int num)//odd er jonno
{
    if(num<=0)
    {
        return;
    }
    else
    {
        printEven2(num-2);
        printf("%d ",num-1);
    }
    return ;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printEven1(n);
    }
    else
    {
        printEven2(n);
    }
    return 0;
}

