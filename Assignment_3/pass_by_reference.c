#include<stdio.h>
void increment(int *x)
{
    *x=*x+1;
    printf("Inside function: x =%d\n",*x);
}
int main()
{
     int x=5;
   printf("Before function call: x =%d\n",x);
   increment(&x);
   printf("After function call: x =%d\n",x);
    return 0;
}