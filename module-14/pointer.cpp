#include <stdio.h>

int main()
{
    int m = 50;
    printf("value of m - %d\n", m);
    printf("address of m - %p\n", m);

    int *p = &m;
    printf("address of p - %p\n", p);
    printf("address of pointer p - %p\n", *p);

    // dereference
    printf("value of m accessed by pointer p - %d\n", *p);

    *p = 100;
    printf("value of m changed by pointer p - %d\n", m);
    printf("value of pointer p -  %d\n", *p);
    return 0;
}
