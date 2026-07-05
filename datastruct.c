#include <stdlib.h>
#include "datastruct.h"

void push(freqmap *fqm, int new_val){
  int exists = 0;
  int index;
  for (index = 0; index < fqm->curr_size; index++) {
    if (fqm->value[index]==new_val) {
      exists = 1;
      //index = i;
      break;
    }
  }
  if (exists)
    fqm->count[index]++;
  else {
    fqm->curr_size++;
    if (fqm->curr_size >= fqm->max_size) {
      fqm->max_size*=2;
      realloc(fqm->value, fqm->max_size);
      realloc(fqm->count, fqm->max_size);
    }
    fqm->value[fqm->curr_size-1] = new_val;
    fqm->count[fqm->curr_size-1] = 1;
  }
}

int count(freqmap fqm, int val) {
  int exists = 0;
  int index;
  for (index = 0; index < fqm.curr_size; index++)
    if (fqm.value[index]==val) {
      exists = 1;
      break;
    }
  if (!exists) return 0;
  else return fqm.count[index];
}
