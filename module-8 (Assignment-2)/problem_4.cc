#include <stdio.h>

int main()
{
    int n1, n2, m2;
    scanf("%d", &n1);
    int arr[n1];  // n1 er value assign korar pore arraay modhe rakhte hobe
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d%d", &n2, &m2);

    arr[n2] = m2;

    // reverse the array
    for (int i = n1 - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
