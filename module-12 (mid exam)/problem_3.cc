#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a>=0 && a <= 100 &&  b>=0  && b <= a && c>= 0 && c <= 20)

    {
        printf("%d", (a*c)/b);
    }
    return 0;
}
