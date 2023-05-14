#include <stdio.h>

// function format
// return_type func_name(param)
// {
//     // code
//     //  return result
// }

// function-1
// return + parameter

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", sum(x, y));
    return 0;
}
