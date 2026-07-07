#include <stdio.h>
#include "ntlib.h"
#include "ntlib.c"

int main(){
  int p;
  int n = 675;
  int a, b, c;
  //int count = 0;
  int size = 12;
  int *value = malloc(size*sizeof(int));
  int *count = malloc(size*sizeof(int));
  freqmap fqm = {value, count, 0, size};
  freqmap *fqm_ptr = &fqm;
  int works = factor(n, fqm_ptr);
  if (!works) {
    printf("%d %d\n", fqm.value[0], fqm.value[1]);
    printf("%d %d\n", fqm.count[0], fqm.count[1]);
    printf("%d\n", fqm.curr_size);
  }
  free(value);
  free(count);
  return 0;
}
