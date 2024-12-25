#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
    if(a==0||b==0||c==0 || a!=b||b!=c||c!=a)
   {
    printf("NO");
   }
   else if(a!=b||b!=c||b!=c||c!=a||b!=c||c!=a)
   {
    printf("NO");
   }
   if(a==b&&b==c&&c==a&&a>0&&b>0&&c>0)
   {
    printf("YES");
   }
  
    return 0;
}