#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    // int n;
    // scanf("%d", &n);

    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", i,j);
            // printf("%d %d\n", a[i],a[j]);

            if (a[i] + a[j] == x)
            {
                flag = 1;
            }
        }
    }

    if (flag == 1)
    {
        printf("Yes\n");
    }

    else
    {
        printf("No\n");
    }

    return 0;
}
