#include<stdio.h>
void change_it(int *a,int n)
{
     *(a+(n-1))=100;
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
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
   change_it(ar,n);
    return 0;
}