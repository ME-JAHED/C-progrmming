#include<stdio.h>
int main()
{
    int col,row;
    scanf("%d %d",&col,&row);
   int a[col][row];
   for(int i=0;i<col;i++)
   {
    for(int j=0;j<row;j++)
    {
        scanf("%d ",&a[i][j]);
        printf("%d ",a[i][j]);
    }
   }
    return 0;
}