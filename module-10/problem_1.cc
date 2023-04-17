#include <stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    char b[1001];
    int lengthOne;
    int lengthTwo;

    scanf("%s%s", &a,&b);
    lengthOne = strlen(a);
    lengthTwo = strlen(b);
    printf("%d %d\n",lengthOne,lengthTwo);
    printf("%s %s\n",a,b);

    return 0;
}

