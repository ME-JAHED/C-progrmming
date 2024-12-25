#include<stdio.h>
int main()
{
   int ar[4]={1,2,3,4};
   int *p=ar+3;
   //p=ar+3;
   *p=5;
   printf("%d\n",ar[3]);
    return 0;
}