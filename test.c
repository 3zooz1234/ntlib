#include <stdio.h>
#include "ntlib.h"
#include "ntlib.c"

int main(){
  int p;
  int a, b, c;
  int sol[2];
  int *sol_ptr = &sol[0];
  scanf("%d %d %d",&a,&b,&c);
  int issolve = LinDioEq(a,b,c,sol_ptr);
  printf("%d\n", issolve);
  if (!issolve)
    printf("%d %d\n", sol[0], sol[1]);
  return 0;
}
