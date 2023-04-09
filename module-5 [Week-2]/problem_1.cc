// Code force
// https://docs.google.com/document/d/18XxMIXAdptjGq5a_OphEXNpmaXnP4F-CX_mYOf-np58/edit
// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    if (A >= B)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
