#ifndef DATASTRUCT_H
#define DATASTRUCT_H

typedef struct {
  int *value;
  int *count;
  int curr_size;
  int max_size;
} freqmap;

void push(freqmap *fqm, int new_val);
int count(freqmap fqm, int val);

#endif
