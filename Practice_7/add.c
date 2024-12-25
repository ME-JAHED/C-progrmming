#include<stdio.h>
void add(int a,int b)
{
    int add=a+b;
    printf("%d",add);
}
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   add(a,b);
    return 0;
}