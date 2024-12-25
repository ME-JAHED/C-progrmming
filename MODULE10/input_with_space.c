#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
fgets(a,14,stdin);
a[7]='\0';
printf("%s",a);
 return 0;
}