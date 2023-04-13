// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include <stdio.h>

int main()
{
    int n, arr[n];
    int sum;
    scanf("%d", &n);
    // printf("%d\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    if (sum < 0)
    {
        sum = sum * -1;
        printf("%d\n", sum);
    }
    else
    {
        printf("%d\n", sum);
    }

    return 0;
}
