#include<stdio.h>
void rec(int i,int n)
{
 if(i==n+1) return;
 printf("I love Recursion\n");
 rec(i+1,n);
}
int main()
{
   int n;
   scanf("%d",&n);
   rec(1,n);
    return 0;
}