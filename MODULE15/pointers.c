#include<stdio.h>
int main()
{
   int x=100;
   int *ptr=&x;
   printf("address of x-%p\n",&x);
   printf("address of x-%p\n",ptr);
   printf("address of ptr-%p\n",&ptr);
   printf("value of x-%d\n",*ptr);
    return 0;
}