#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf("%lf", &x);
    // printf("%.3lf", x);
    // printf("%.2f", ceil(x));
    // printf("%.2lf", floor(x));
    // printf("%.2lf", round(x));
    // printf("%.2lf", sqrt(x));
    printf("%.2lf\n", abs(x));

    double a, b;
    scanf("%lf %lf", &a, &b);
    double res = pow(a, b);
    printf("%.2lf", res);
    return 0;

    // if we want to work with integer data types for power functions, we

    // int a, b;
    // scanf("%d %d", &a, &b);
    // int res = pow(a*1.0 , b*1.0);
    // printf("%d", res);
    // return 0;
}
