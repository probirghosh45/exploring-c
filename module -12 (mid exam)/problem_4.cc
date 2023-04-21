#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1001];
    fgets(s, sizeof(s), stdin);
    int uppercase_Count = 0;
    int lowercase_Count = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (isupper(s[i]))
        {
            uppercase_Count++;
        }
        else if(islower(s[i]))
            {
                lowercase_Count++;
            }
    }

    printf("%d %d", uppercase_Count++,lowercase_Count++);
    return 0;
}
