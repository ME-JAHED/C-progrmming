#include<stdio.h>
int main()
{
   int col,row;
   scanf("%d %d",&col,&row);
   int count=0;
   int elm=col*row;
   int a[col][row];
   for(int i=0;i<col;i++)
   {
    for(int j=0;j<row;j++)
    {
        scanf("%d ",&a[i][j]);
    }
   }
   for(int i=0;i<col;i++)
   {
    for(int j=0;j<row;j++)
    {
        if(a[i][j]==0)
        {
            count++;
        }
    }
   }
   if(elm==count)
   {
    printf("zero matrix");
   }
   else
   {
    printf("not zero matrix");
   }

    return 0;
}