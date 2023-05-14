#include <stdio.h>

// function format
// return_type func_name(param)
// {
//     // code
//     //  return result
// }

// function-2
// return + no parameter

int sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    return sum;
}

int main()
{
    // printf("%d", sum(100));
    printf("%d", sum());
    return 0;
}
