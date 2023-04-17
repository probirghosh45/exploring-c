#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    gets(a);
    int count = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        // printf("%d ", i);
        // printf("%c", a[i]);
        printf("%d \n", a[i]); //output = 49 means ASCII value of 1
        
    }

    // printf("%d\n",);
    return 0;
}
