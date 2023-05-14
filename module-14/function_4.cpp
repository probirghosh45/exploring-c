#include <stdio.h>

// function format
// return_type func_name(param)
// {
//     // code
//     //  return result
// }

// function-4
// no return + no parameter

void sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    printf("sum: %d\n", sum);
}

int main()
{
    sum();
    sum();
    return 0;
}
