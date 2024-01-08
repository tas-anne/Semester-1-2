#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Adham", str2[] = "Sartaj";
    int n;
    int s=0,a=0;
    scanf("%d",&n);
    char str3[n];
    getchar();
    while(n--)
    {
        gets(str3);
        int result;
        result = strcmp(str1, str3);
//printf("Result:%d\n",result);
        if(result!=0)
        {
            s++;
        }
        else
        {
            a++;
        }

    }
    if(s>a)
    {
        printf("Sartaj\n");
    }
    if(a>s)
    {
        printf("Adham\n");
    }
    if(a==s)
    {
        printf("No imposter\n");
    }
    return 0;
}
