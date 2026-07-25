#include <stdio.h>
#include "ntlib.h"
#include "ntlib.c"

int main(){
  printf("%d\n", pow(5,3));
  printf("%d\n", gcd(6,15));
  printf("%d\n", largest_factor(58));
  return 0;
}
