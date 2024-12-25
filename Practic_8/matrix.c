#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n][n];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        scanf("%d ",&a[i][j]);
    }
   }
   int count_1=0;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
      if(i==j)
      {
        count_1+=a[i][j];
      }  
    }
   }
   int count_2=0;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
      if(i+j==n-1)
      {
        count_2+=a[i][j];
      }  
    }
   }
   int ans = abs(count_1-count_2);
   printf("%d",ans);
    return 0;
}