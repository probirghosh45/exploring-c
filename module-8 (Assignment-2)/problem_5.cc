#include <stdio.h>

int main()
{
    int n1;
    scanf("%d", &n1);
    int arr[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }

    // reverse the array
    for (int i = n1 - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
