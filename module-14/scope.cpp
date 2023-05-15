#include <stdio.h>
// global scope
int j = 500;


void fun(void)
{
    int i = 200;
    printf("Memory address of fun func - %p\n", &i);
    printf("Memory address of j - %p\n", &j);
}

int main()
{
    int i = 300;
    fun();
    // printf("%d\n", i);
    printf("Memory address of Main func - %p\n", &i);
    printf("Memory address of j - %p\n", &j);

    return 0;
}
