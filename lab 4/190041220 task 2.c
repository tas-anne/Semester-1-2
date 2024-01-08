#include<stdio.h>
int superDigit(long long m)
{
    if(m<=9)
    {
        return m;
    }
    else
    {
       long long  int s = 0;
        do
        {
            s =s+ m % 10;
            m = m / 10;
        }
        while (m > 0);
        return superDigit(s);
    }
}
int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);

     //digit er sum
     long long int  result=0;
    while(n>0)
    {
       result=result+n%10;
       n=n/10;
    }
    long long int p=result*k;

    long long int d=superDigit(p);
    printf("%lld",d);


}
