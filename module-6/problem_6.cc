// #include <stdio.h>

// int main()
// {
//     int i, num, nums, digit;

//     scanf("%d", &num);

//     for (i = 0; i < num; i++)
//     {
//         scanf("%d", &nums);
//         digit = nums % 10;
//         // nums = nums / 10;
//         printf("%d ", digit);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int t, test;
    scanf("%d", &test);
    for (t = 0; t < test; t++)
    {
        int num, i;
        scanf("%d", &num);

        // for (i = num; i > 0; i /= 10)
        // {
        //     printf("%d ", i % 10);
           
        // }

        i = num;
        do{
           printf("%d ", i % 10);  
           i /= 10;
        }
        while (i > 0);
        
         printf("\n");
    }

    return 0;
}