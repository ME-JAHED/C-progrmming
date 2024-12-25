#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int ar_1[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d ",&ar_1[i]);
   }
   int m;
   scanf("%d",&m);
   int ar_2[m];
    for(int j=0;j<m;j++)
    {
    scanf("%d ",&ar_2[j]);
    }
    int ans[n+m];
    for(int i=0;i<n;i++)
    {
    ans[i]=ar_1[i];
    }
    int i=n;
    for(int j=0;j<n;j++)
    {
    ans[i]=ar_2[j];
    i++;
    }
    for(int i=0;i<n+m;i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
}