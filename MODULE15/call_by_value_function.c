#include<stdio.h>
void fun(int x)
{
 printf("address of fun x-%p",&x);
}
int main()
{
   int x=1;
   printf("address of main x-%p",&x);
   fun(x);
    return 0;
}