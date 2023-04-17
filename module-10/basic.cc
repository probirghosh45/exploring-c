#include <stdio.h>

int main()
{

    // size calculation

    int m[10];
    printf("%d %d\n", sizeof(m), sizeof(int));

    char n[10];
    printf("%d %d\n", sizeof(n), sizeof(char));

    //   char a[6] ={'P','R','O','B','I','R'};
    // char a[8] = "Probir";
    char a[7] = "Probir"; // null er jonno size ak bariye daoya hoice
    
    printf("%d\n",sizeof(a));
    
    // for (int i = 0; i < sizeof(a); i++)
    // {
    //     printf("%c", a[i]);
    // }

    printf("%s",a);
    return 0;
}
