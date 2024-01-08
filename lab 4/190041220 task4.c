#include<stdio.h>
int dfs(int arr[1000][1000],int sr,int sc,int nc,int row,int col,int source)
{
    if(sr<0||sr>=row||sc<0|| sc>=col)
        return;
    else if(arr[sr][sc]!=source)
        return;
    arr[sr][sc]=nc;
    dfs(arr,sr-1,sc,nc,row,col,source);
    dfs(arr,sr+1,sc,nc,row,col,source);
    dfs(arr,sr,sc-1,nc,row,col,source);
    dfs(arr,sr,sc+1,nc,row,col,source);


}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int sr,sc,nc;
    scanf("%d %d %d",&sr,&sc,&nc);
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)

        {

            scanf("%d",&arr[n][m]);
        }
    }
    int row=n;
    int col=m;
    if(nc==arr[sr][sc])
        return arr;

    int source=arr[sr][sc];
    dfs(arr,sr,sc,nc,row,col,source);
    return arr;


}
