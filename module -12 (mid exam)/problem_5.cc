#include <stdio.h>
#include <stdio.h>

int main()
{
    int N, K; 
    scanf("%d", &N);
    scanf("%d", &K);

    for (int i = 0; i < K; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (N >= 1 && K <= 100)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
