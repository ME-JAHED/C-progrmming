#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int sum=a+b;
   int count=0;
   int count_2=0;
   for(int i=1;i<=sum;i++)
   {
    if(i%2==0)
    {
        count++;
    }
    else if(i%2!=0)
    {
        count_2++;
    }
   }
   if(a==0&&b==0)
   {
    printf("NO");
   }
   else if(count==a&&count_2==b||count==b&&count_2==a)
   {
    printf("YES");
   }
   else if(count!=a&&count_2!=b||count!=b&&count_2!=a)
   {
    printf("NO");
   }
    return 0;
}