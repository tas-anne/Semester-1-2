#include<stdio.h>
void floodFill(int n,int m,int arr[100][100],int x, int y, int pre, int nc)
{
    if (x<0 || x>=m || y<0 || y>=n)//array r baire jacche kina check
    {
        return;
    }
    if (arr[x][y]!=pre) //colour ta mile kina
    {
        return;
    }
    if (arr[x][y]==nc)//new colour thakle ar change korbo na
    {
        return;
    }
    arr[x][y]=nc;//new colour e update kora
    floodFill(n,m,arr,x+1,y,pre,nc);
    floodFill(n,m,arr,x-1,y,pre,nc);
    floodFill(n,m,arr,x,y+1,pre,nc);
    floodFill(n,m,arr,x,y-1,pre,nc);

}

void floodFill2(int n,int m,int arr[100][100],int x,int y,int nc)
{

    int pre=arr[x][y];

    floodFill(n,m,arr,x,y,pre,nc);

}

int main()
{
    int arr[100][100];
    int i,j,n,m,sc,sr,nc;
    scanf("%d %d",&n,&m);
    scanf("%d %d %d",&sc,&sr,&nc);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    floodFill2(n,m,arr,sc,sr,nc);

    //print the new one
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
