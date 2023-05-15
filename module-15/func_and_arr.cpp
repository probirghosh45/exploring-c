#include <stdio.h>

void fun(int arr[], int n) //*arr & arr[] same , for floating value here we will use double instead of int 
{
    // printf("%d\n", sizeof(arr[0]));
    // int size = sizeof(arr[0])/sizeof(int);
    // printf("%d\n",size);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {10, 35, 78, 42, 97};
    // int size = sizeof(arr)/sizeof(int);
    // printf("%d\n",size);
    fun(arr, 5);
    return 0;
}
