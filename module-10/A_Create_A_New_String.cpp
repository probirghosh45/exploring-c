#include <stdio.h>
#include<string.h>
int main()
    char a[100];
    char b[100];
    int lengthOne ;
    int lengthTwo;

    scanf("%s%s", &a,&b);
    lengthOne = strlen(a);
    lengthTwo = strlen(b);
    printf("%d %d\n",lengthOne,lengthTwo);
    printf("%s %s",a,b);
    return 0;
}

