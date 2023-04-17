#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    gets(a);
    int count = 0;
    int sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        // printf("%d ", i);
        // printf("%c", a[i]);
        // printf("%d \n", a[i]); //output = 49 means ASCII value of 1
        // printf("%d",a[i]-48); // ASCII value of  0 is 48
        // printf("%d",a[i]-'0');
        sum += a[i]-'0';  
    }

    printf("%d\n",sum);
    return 0;
}
