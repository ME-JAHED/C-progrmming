#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d ",&a[i]);
   }
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
        int tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
        }
    }
   }
   int middle_1=n/2;
   int middle_2=middle_1-1;
   if(n%2==0)
   {
    for(int i=middle_2;i<=middle_1;i++)
   {
    printf("%d ",a[i]);
   }
   }  
   else
   {
    for(int i=middle_1;i<=middle_1;i++)
    {
        printf("%d",a[i]);
    }
   }
    return 0;
}