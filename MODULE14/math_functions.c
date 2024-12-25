#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
 double a;
 scanf("%lf",&a);
 int ans=ceil(a);
 printf("%d",ans);
int ans=floor(a);
printf("%d",ans);
double ans=round(a);
//round take ceil vlue after 0.5 and take floor vlue before 0.5
pritnf("%d",ans);

double a;
scanf("%lf",&a);
double ans=sqrt(a);
printf("%0.2lf\n",ans);

double a,b;
scanf("%ld %ld",&a,&b);
double ans=pow(a,b);
printf("%ld\n",ans);

int a;
scanf("%d",a);
int ans=as(a);
printf("%d\n",ans);
    return 0;
}