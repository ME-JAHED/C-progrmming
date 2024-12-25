#include<stdio.h>
int main()
{
   float x,p;
   scanf("%f %f",&x,&p);
   float n=((100*p)/(100-x));
   printf("%0.2f",n);
    return 0;
}