#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001];
   scanf("%s",s);
   int small=0;
   int cap=0;
    for(int i=0;i<strlen(s);i++)
   {
     if(s[i]>='A'&&s[i]<='Z')
        {
            cap++;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            small++;
        }
   }
     printf("%d %d",cap,small);  

    return 0;
}