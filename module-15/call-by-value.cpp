#include <stdio.h>

void fun(int x)
{
    x = 500;
    printf("address of x [fun]: %p\n", &x);
    printf("value of x [fun]: %d\n", x);
}

int main()
{
    int x = 20;
    fun(x);
    printf("address of x [main]: %p\n", &x);
    printf("value of x [main]: %d", x);
    return 0;
}
