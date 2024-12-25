#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   int w,h;
   for(int i=0;i<t;i++)
   {
     scanf("%d %d",&w,&h);
      if(w!=h)
   {
    printf("Rectangle\n");
   }
   else
   {
     printf("Square\n");
   }
   }
   
   
    return 0;
}