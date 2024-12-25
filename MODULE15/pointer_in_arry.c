#include<stdio.h>
int main()
{
   int ar[5]={10,20,30,40};
   printf("address of 0th arry-%p\n",&ar[0]);
   printf("address of 0th arry-%p\n",ar);
   printf("value of 0th arry-%d\n",ar[0]);
   printf("value of 0th arry-%d\n",*ar);
   printf("value of 1st arry-%d\n",*(ar+1));
   printf("value of 2nd arry-%d\n",*(ar+2));

   
    return 0;
}