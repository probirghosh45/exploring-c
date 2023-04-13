// Given N numbers. Count how many of these values are even, odd, positive and negative.

#include <stdio.h>

int main()
{
    int i, num, nums;
    int even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &num);
    // printf("%d\n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &nums);
        if (nums % 2 == 0)
        {
            even++;
            // printf("Even: %d\n", nums);
            // printf("Index of Even Number: %d\n", i);
            //     sum = 0;
            //     sum = sum + i;
            //    printf("Odd: %d\n", sum);

            if (nums > 0)
            {

                // printf("Index of Positive Number: %d\n", i);
                positive++;
            }
            else if (nums < 0)
            {
                 negative++;
                // printf("Index of Negative Number: %d\n", i);
            }
        }
        else if (nums % 2 == 1 || nums % 2 == -1)
        {
            odd++;
            // printf("Odd: %d\n", nums);
            // printf("Index of Odd Number: %d\n", i);
            //     sum = 0;
            //     sum = sum + i;
            //    printf("Odd: %d\n", sum);
            if (nums > 0)
            {
                positive++;
                // printf("Index of Positive Number: %d\n", i);
            }
            else
            {
                negative++;
                // printf("Index of Negative Number: %d\n", i);
            }
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}

