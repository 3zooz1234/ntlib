#ifndef NTLIB_H
#define NTLIB_H

#include "datastruct.h"

int isprime(int n);
int gcd(int a, int b);
int LinDIoEq(int a, int b, int c, int *sol);
int factor(int n, freqmap *fqm_ptr);
long long int pow(int base, int exp);
int largest_factor(int n);
int factor2num(freqmap fqm);

#endif
