#include <stdio.h>

int main()
{
    int a,b,result;
    scanf("%d%d",&a,&b);
    if(a>b){
        result = a -b;
        printf("%d",result);
    }
    else{
        result = 0;
        printf("%d",result);
    }
    return 0;
}

