#include <stdio.h>

int main()
{
    char a[100], b[100];
    scanf("%s%s", &a, &b);
    int i = 0;

    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Both are same length\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A Small");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B Small");
            break;
        }
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A Small");
            break;
        }
        else
        {
            printf("B Small");
            break;
        }
    }

    return 0;
}
