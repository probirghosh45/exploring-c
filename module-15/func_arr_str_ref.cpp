#include <stdio.h>

void fun(int *arr, int n)
{
    arr[1] = 45;
    arr[2] = 46;
}

int main()
{
    int arr[5] = {15, 42, 93, 64, 35};
    fun(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
