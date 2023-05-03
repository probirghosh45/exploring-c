#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    char b[1000001];
    for (int i = 0; i<a ; i++)
    {    
        gets(b);
        // printf("%s\n",b);
    }
      printf("%s",b);
    return 0;
}
