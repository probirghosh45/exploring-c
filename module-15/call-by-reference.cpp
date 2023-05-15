#include <stdio.h>

void fun(int *p)
{
    *p = 50;
    printf("address of x [fun]: %p\n", p);
    printf("value of x [fun]: %d\n", *p);
}

int main()
{
    int n = 45;
    fun(&n);
    printf("address of x [main]: %p\n", &n);
    printf("value of x [main]: %d", n);
    return 0;
}
