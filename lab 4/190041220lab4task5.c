#include<stdio.h>
#include<math.h>
int occ(int n,int k)
{
    if(n==1&&k==1)
        return 0;
    int mid=(pow(2,n-1))/2;   //length 2^n-1             // n=3 -> 0110


                                                        // n=4 ->  0110 1001  length(2^4-1)
    //mid er age na pore check
    if(k<=mid)
        return occ(n-1,k);
    else
        return !occ(n-1,k-mid); //1's complement
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int p=occ(n,k);
    printf("%d",p);

}

