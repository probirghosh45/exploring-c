#include <stdio.h>

int main()
{
    // int arr[5];
    int n, arr[n];
    scanf("%d", &n);
    // for (int i = 0; i < 5; i++)
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // reverse the array
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
