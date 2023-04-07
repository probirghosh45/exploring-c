#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int A;
  long long int B;
  float C;
  char D;
  
    scanf("%d%lld%f%c", &A,&B,&C,&D);
    printf("%d\n%lld\n%0.2f\n%c",A,B,C,D);
    return 0;
}