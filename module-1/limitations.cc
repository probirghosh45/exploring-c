#include <stdio.h>

int main(){
    float s= 22.5484878899797;
    double p=22.5484878899797;

    // both output value are wrong but double is more accurate than float data type
    printf("%0.15f\n", s);
    printf("%0.15lf\n", p);
    return 0;
}