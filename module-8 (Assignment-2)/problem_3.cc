#include <stdio.h>

int main()
{
    int i, n,nums,sum_1=0,sum_2=0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums);
        
        if(nums%2==0){
            sum_1 = sum_1+nums;
            // printf("%d\n", sum);
            
        }
        else{
            sum_2 = sum_2+nums;
        }
    }
    printf("%d %d", sum_1 , sum_2);
    return 0;
}
