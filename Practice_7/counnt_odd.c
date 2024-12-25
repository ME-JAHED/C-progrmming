#include<stdio.h>
void count_odd(int *a,int n)
{
    int count_odd=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d ",a[i]);
    }
    for(int i=0;i<n;i++)
    {
         if(a[i]%2!=0)
        {
            count_odd++;
        }
    }
     printf("%d\n",count_odd);
}
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d ",&ar[i]);
   }
   count_odd(ar,n);
    return 0;
}