// #include <stdio.h>

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     int b;
//     int t1=0,t2=0;
//     for(int i = 0; i < a; i++){
//         scanf("%d", &b);
//     }

//     // printf("%d", b);
//     for(int i = 0; i < a; i++){
//         printf("%d", b);
//     //    if(b%2==0){
//     //     t1++;
//     //    }
//     //    else if (b%2==1){
//     //     t2++;
//     //    }
//     }
//     // printf("%d %d", t1,t2);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int i, n,nums,sum_1=0,sum_2=0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums);
        
        if(nums%2==0){
            sum_1++;
            // printf("%d\n", sum);
            
        }
        else{
            sum_2++;
        }
    }
    printf("%d %d", sum_1 , sum_2);
    return 0;
}