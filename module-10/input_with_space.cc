#include <stdio.h>

int main()
{
    char a[100];
    // scanf("%s", &a); //space er porer text k nicce na
    // gets(a);
    fgets(a, sizeof(a), stdin); 
    printf("%s", a);
    return 0;
}

