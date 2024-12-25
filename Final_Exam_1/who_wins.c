#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   
   long long int count_1=0;
   long long int count_2=0;
   for(int i=0;i<n;i++)
   {
    long long int x1 ,x2;
    scanf("%lld %lld",&x1,&x2);
    if(x1>x2)
    {
        count_1++;
    }
    if(x1<x2)
    {
        count_2++;
    }
   }
  if(count_1>count_2)
  {
    printf("Tiger");
  }
  else if(count_1<count_2)
  {
    printf("Pathan");
  }
  else
  {
    printf("Draw");
  }
    return 0;
}