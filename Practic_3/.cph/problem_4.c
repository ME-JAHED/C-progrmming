#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d %d ",&a,&b);
   int z=a-b;
   if(z<0)
   {
    printf("0");
   }
   else
   {
    printf("%d",z);
   }
    return 0;
}