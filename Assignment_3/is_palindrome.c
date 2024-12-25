#include<stdio.h>
#include<string.h>
char is_palindrome(char *a)
{
   int st=strlen(a);
   int i=0;
   int j=st-1;
   while(i<j)
   {
    if(a[i]!=a[j])
    return 0;
    i++;
    j--;
   }
   return 1;
   
}
int main()
{
   char a[10];
   scanf("%s",a);
   int ans=is_palindrome(a);
   if(ans==0)
   {
    printf("Not Palindrome");
   }
   else if(ans==1)
   {
    printf("Palindrome");
   } 
    return 0;
}