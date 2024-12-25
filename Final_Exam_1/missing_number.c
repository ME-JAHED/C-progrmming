#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   int s,a,b,c;
   int ans;
   for(int i=0;i<t;i++)
   {
    scanf("%d %d %d %d\n",&s,&a,&b,&c);
     ans=s-(a+b+c);
     printf("%d\n",ans);
   }
    return 0;
}