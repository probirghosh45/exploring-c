#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b[1001];
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    int c;
    scanf("%d", &c);

    for (int i = 0; i < a; i++)
    {
        if (b[i] == c)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

