// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
// Problem Set (doc): https://docs.google.com/document/d/1QIHemg4l8-HoEh-b_gpYNfFtrB-u9ZCOCs9kKyWUUao/edit

#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
