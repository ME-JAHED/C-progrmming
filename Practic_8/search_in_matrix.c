#include<stdio.h>
int main()
{
   long long int n,m;
   scanf("%lld %lld",&n,&m);
   long long int a[n][m];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        scanf("%lld ",&a[i][j]);
    }
   }
   long long int x;
   scanf("%lld",&x);
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
      if(a[j][i]==x)
      {
        printf("will not take number");
        return 0;
      } 
    }
   }
    printf("will take number");
    return 0;
}