#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int sum=a+b;
  if(a==0&&b==0)
  {
    printf("NO");
  }
  else if(a==b)
  {
    printf("YES");
  }
  else if(sum%2==0)
  {
   printf("NO");
  }
  else if(sum%2!=0)
  {
    printf("YES");
  }
    return 0;
}