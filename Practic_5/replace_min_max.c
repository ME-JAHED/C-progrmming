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
   int max=INT_MIN;
   int min=INT_MAX;
   int pos_1=0;
   int pos_2=0;
   for(int i=0;i<n;i++)
   {

      if(min>a[i]){
        min=a[i];
        pos_1=i; 
      }
         if(max<a[i])
        {
            max=a[i];
            pos_2=i;
        }
   }
    int tem=a[pos_1];
   a[pos_1]=a[pos_2];
   a[pos_2]=tem;
   for(int i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   }

    return 0;
}