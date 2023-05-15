#include <stdio.h>

int main()
{
    int arr [5] = {10,25,45,37,19};

    printf("0th index address : %p\n", &arr[0]);
    printf("0th index address : %p\n", arr);

    printf("0th index  address : %p\n", arr[0]);
    printf("0th index address : %p\n", *arr);    


    printf("1st index address : %p\n", &arr[1]);
    printf("1st index address : %p\n", (arr+1));

    printf("1st index value : %d\n", arr[1]);
    printf("1st index address : %d\n", *(arr+1));
    printf("1st index value : %d\n", 1[arr]);
    printf("1st index address : %d\n", *(1+arr));
    return 0;
}

