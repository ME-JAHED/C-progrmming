#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001];
   fgets(s,1001,stdin);
   scanf("%s",s);
   int cap=0;
   int sma=0;
   int spac=0;
  for(int i=0;i<strlen(s);i++)
  {
     if(s[i]>='A'&&s[i]<='Z')
   {
    cap++;
   }
    if(s[i]>='a'&&s[i]<='z')
    {
        sma++;
    }
    if(s[i]==' ')
    {
        spac++;
    }
  }
   printf("Capital - %d\n",cap);
   printf("Small - %d\n",sma);
   printf("Spaces - %d\n",spac);
    return 0;
}