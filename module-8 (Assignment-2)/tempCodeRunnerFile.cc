#include <stdio.h>

int main()
{
    int n1,n2, m2; 
    int arr[n1];

    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d%d", &n2 ,&m2);

    arr[n2]=m2;

    // reverse the array
    for (int i = n1 - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
