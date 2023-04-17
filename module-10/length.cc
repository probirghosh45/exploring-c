#include <stdio.h>
// #include <cstring>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s", &a);
    int count = 0;

    // using for loop iteration
    
    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d", count);

    // using while loop
    
    // int i = 0;
    // while (a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    // printf("%d", count);



    // using built-in functions

    int length =strlen(a);
    printf("%d", length);
    return 0;
}
