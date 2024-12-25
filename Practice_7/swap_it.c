#include<stdio.h>
void swap_it(int a,int b)
{
    int tmp=a;
    a=b;
    b=tmp;
    printf("%d %d",a,b);
}
int main()
{
   int g,h;
   scanf("%d %d",&g,&h);
   swap_it(g,h);
    return 0;
}