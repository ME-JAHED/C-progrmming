#include<stdio.h>
void my_len(char *a)
{
 int my_len=0;
 for(int i=0;a[i]!='\0';i++)
 {
    my_len++;
 }
 printf("%d",my_len);
}
int main()
{
   char ch[10];
   scanf("%s",&ch);
   my_len(ch);
    return 0;
}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
  // char a[100];
   //scanf("%s",&a);
   //int st = strlen(a);
   //printf("%d",st);
   //int count=0;
   //for(int i=0;a[i]!='\0';i++)
   //{
    //count++;
   //}
   //printf("%d",count);
    //return 0;
//}