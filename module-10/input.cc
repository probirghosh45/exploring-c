#include <stdio.h>

int main()
{
    char a[6];  //5+1 = 6 , 1 extra for null "\0"
    scanf("%s", &a);
    printf("%s", a);
    // 5 size er string print haoyar kotha kintu puro string tai print hocce ata windows er compiler er fault.
    return 0;
}
