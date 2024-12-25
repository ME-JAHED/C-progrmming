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
    }
   }
   int flag=1;
   if(col!=row)
   {
    flag=0;
   }
   for(int i=0;i<col;i++)
   {
    for(int j=0;j<row;j++)
    {
        if(i+j==row-1)
        {
            if(a[i][j]!=1)
            {
                flag=0;
            }
        }
        else if(a[i][j]!=0)
        {
            flag=0;
        }
    }
   }
   if(flag==1)
   {
    printf("secodary unit matrix\n");
   }
   else
   {
    printf("not secodary unit matrix\n");
   }
    return 0;
}