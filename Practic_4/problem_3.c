#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   long long int a[n];
   for(int i=0;i<n;i++)
   {
   scanf("%lld ",&a[i]);
   }
   for(int i=0;i<n;i++)
   {
    if(a[i]<0)
    {
        a[i]=2;
    }
   else if(a[i]>0)
    {
        a[i]=1;
    }
    printf("%lld ",a[i]);
   }
    return 0;
}