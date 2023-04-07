#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    if (n >= 1500)
    {
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }
    else if(n > 1000)
    {
        printf("I will buy Punjabi");
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}
