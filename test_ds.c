#include <stdio.h>
#include <stdlib.h>
#include "datastruct.h"
#include "datastruct.c"

int main(){
  freqmap fqm;
  int size = 4;
  int *x = malloc(size*sizeof(int));
  int *c = malloc(size*sizeof(int));
  fqm.value = x;
  fqm.count = c;
  fqm.curr_size = 0;
  fqm.max_size = size;
  freqmap *fqm_ptr = &fqm;
  push(fqm_ptr, 3);
  push(fqm_ptr, 2);
  push(fqm_ptr, 1);
  push(fqm_ptr, 25);
  push(fqm_ptr, 25);
  push(fqm_ptr, 2);
  printf("%d %d %d %d\n", fqm.value[0], fqm.value[1], fqm.value[2], fqm.value[3]);
  printf("%d %d %d %d\n", fqm.count[0], fqm.count[1], fqm.count[2], fqm.count[3]);
  printf("%d\n", count(fqm, 2));
  free(x);
  free(c);
  return 0;
}
