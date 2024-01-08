#include<stdio.h>
#include<string.h>
int main()
{
    int t,tmp;
    scanf("%d",&t);
    int arr[t];
    for(int i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
    }
   //sorting the array
    for(int i=0; i<t; i++)
    {
        for(int j=i+1; j<t; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp = arr[i];
                arr[i] =arr[j];
                arr[j] = tmp;
            }
        }
    }
    //highest frequency count

    int max_time = 1, ans = arr[0], curr_element_times = 1;
    for (int i = 1; i < t; i++)
    {
        if (arr[i] == arr[i - 1])
            curr_element_times++;
        else
        {
            if (curr_element_times > max_time)
            {
                max_time = curr_element_times;
                ans = arr[i - 1];
            }
            curr_element_times = 1;
        }
    }

    if (curr_element_times > max_time)//if last element is highest times//loop count sesh hoye jawar jonno dorkar hoy
    {
        max_time = curr_element_times;
        ans = arr[t - 1];
        printf("%d\n",ans);
    }
    else
    {
        printf("%d\n",ans);
    }
}
