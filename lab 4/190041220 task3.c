#include<stdio.h>
int fib(long long int num)
{
    if(num==0)
        return 0;
    if(num==1||num==2)
        return 1;
    if(num==3)
        return 2;
    return fib(num-1)+fib(num-2)+fib(num-3);            //t0=0               n=4
                                                        //t1=1
                                                        //t2=1
                                                        //t3=0+1+1=2->n-3 th + n-2 th +n-1 th
                                                        //t4=1+1+2=4

}
int main()
{
   long long int n;
    scanf("%lld",&n);
   long long int p=fib(n);
    printf("%lld ",p);

}
