#include<stdio.h>
int occ(int n,int k)
{
    if(n==1)         //base condition
        return 0;
    if(k%2==0)
        {
            return occ(n- 1, k / 2) == 0 ? 1 : 0;
        }
     else
        {
            return occ(n - 1, (k + 1) / 2);
        }
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int p=occ(n,k);
    printf("%d",p);

}
