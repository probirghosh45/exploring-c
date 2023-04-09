// quiz - 2

// #include <stdio.h>
// int main()
// {
//     int x = 5;
//     if (x < 1)
//     {
//         printf("hello");
//     }
//     if (x == 5)
//     {
//         printf("hi");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }

// hi

// quiz - 3
// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     if (x == 1)
//     {
//         if (x == 0)
//         {
//             printf("inside if if\n");
//         }
//         else
//         {
//             printf("inside if else\n");
//         }
//     }
//     else
//     {
//         printf("inside else\n");
//     }
//     return 0;
// }

// inside else

// quiz - 4
// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     if (x == 1)
//     {
//         if (x >= 0)
//         {
//             printf("true\n");
//         }
//         else
//         {
//             printf("false\n");
//         }
//     }
//     return 0;
// }

// no output from this program

// quiz - 5
#include <stdio.h>

int main()
{

    int num = 5;
    if (num > 10)
    {
        printf("Greater than 10");
    }
    else if (num < 10)
    {
        printf("Less than 10");
    }
    else
    {
        printf("Equal to 10");
    }
    return 0;
}


//Less than 10