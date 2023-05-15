#include <stdio.h>
#include <cstring>

void fun(char *arr)
{
    // int size = sizeof(arr) / sizeof(char);
    // printf("%d\n", size); // result 20 since arr size is 20
    printf("%d\n", strlen(arr));
}

int main()
{
    char arr[20] = "World";
    // int size = sizeof(arr)/sizeof(char);
    // printf("%d\n", size); // result 20 since arr size is 20
    // printf("%d\n", strlen(arr));
    fun(arr);
    return 0;
}
