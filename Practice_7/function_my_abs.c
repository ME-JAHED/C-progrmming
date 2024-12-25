#include<stdio.h>
int my_abs(int a)
{
    int my_abs;
    if(a<0)
    {
        my_abs=a*(-1);
    }
    else
    {
        my_abs=a;
    }
    return my_abs;
}
int main()
{
   int n;
   scanf("%d",&n);
   int ans=my_abs(n);
   printf("%d\n",ans);
    return 0;
}