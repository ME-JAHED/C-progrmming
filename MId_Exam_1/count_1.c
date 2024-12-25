#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d ",a[i]);
   }
   int evn=0;
   int odd=0;
   for(int i=0;i<n;i++)
   {
    if(a[i]%2==0)
    {
        evn++;
    }
    else if(a[i]%2!=0)
    {
        odd++;
    }
   }
   printf("%d %d",evn,odd);
    return 0;
}