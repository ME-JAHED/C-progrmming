#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   long long int l,r;
   for(int i=0;i<t;i++)
   {
    scanf("%lld %lld",&l,&r);
    long long int  n1=l*(l+1)/2;
    long long int n2=r*(r+1)/2;
    long long sum=0;
    if(l<r)
    {
         sum=n2-n1+l;
    }
    if(l>r)
    {
         sum=n1-n2+r;
    }
    printf("%lld\n",sum);
   }
  
    return 0;
}