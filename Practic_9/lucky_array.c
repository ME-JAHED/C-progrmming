#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int min=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>min)
        {
            min==a[i];
           
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
        {
            count++;
        }
    }
  printf("%d",count);
    return 0;
}