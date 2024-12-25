#include<stdio.h>
void even(int a[],int n,int i)
{
    if(i>=n) return;
    if(i%2==0)
    {
        even(a,n,i+2);
    }
     printf("%d ",a[i]);
}
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d ",&a[i]);
   }
   even(a,n,0);
    return 0;
}