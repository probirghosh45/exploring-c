#include <stdio.h>

int main()
{
    int p, q, sum, mns, mlt, dvd;
    //    sum = p + q;
    //    mns= p-q;
    //    mlt= p*q;
    //    dvd=p/q;
    scanf("%d %d", &p, &q);
    sum = p + q;
    mns = p - q;
    mlt = p * q;
    dvd = p / q;

    printf("%d\n%d\n%d\n%d\n", sum,mns,mlt,dvd);
    return 0;
}