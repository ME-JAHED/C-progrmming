#include<stdio.h>
void world()
{
    printf("World start\n");
    printf("world end\n");
}
void hello()
{
    printf("hello start\n");
    world();
    printf("hello end\n");
}
int main()
{
   printf("main start\n");
   hello();
   printf("main end\n");
    return 0;
}