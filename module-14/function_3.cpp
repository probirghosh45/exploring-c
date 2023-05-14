#include <stdio.h>

// function format
// return_type func_name(param)
// {
//     // code
//     //  return result
// }

// function-3
// no return + parameter

void sum(int x, int y)
{
    int sum = x + y;
    printf("sum: %d\n", sum);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    sum(x, y);
    return 0;
}
