//#include <stdio.h>
#include "ntlib.h"
#include "datastruct.h"
#include "datastruct.c"

#define max(A,B) (A>B)?A:B
#define min(A,B) (A>B)?B:A

int isprime(int n) {
  if (n==1)
    return 0;
  int i = 2;
  while(i*i<=n){
    if (!(n%i)) return 0;
    i++;
  }
  return 1;
}

int pow(int base, int exp){
  int i = exp;
  int num = base;
  while (i-1) {
    if (i%2) num = num*num*base;
    else num = num*num;
    i/=2;
  }
  return num;
}

int gcd(int a, int b) {
  int mx = max(a,b);
  int mn = min(a,b);
  if (mx%mn) return gcd(mn,mx%mn);
  return mn;
}

int largest_factor(int n){
  int i = 2;
  while (i*i<=n) {
    if (!(n%i)) return n/i;
    i++;
  }
  return n;
}

int LinDioEq(int a, int b, int c, int *sol) {
  if (a==0 || b==0)
    return -1;
  int mx = max(a,b);
  int mn = min(a,b);
  int g = gcd(a,b);
  if (!(c%g)) {
    sol[0] = c/mx+1;
    sol[1] = c%mx;
    while(sol[0]--){
      if (!(sol[1]%mn)){
        sol[1]/=mn;
        break;
      }
      sol[1]+=mx;
    }
    return 0;
  }
  else return 1;
}

int num_to_factor(freqmap fqm) {
  int num = 1;
  for (int i = 0; i<fqm.curr_size; i++)
    num*=pow(fqm.value[i], fqm.count[i]);
  return num;
}

int factor(int n, freqmap *fqm_ptr) {
  if (n == 1) return 1;
  int i = 2;
  while (i*i<=n){
    if (!(n%i)) {
      push(fqm_ptr, i);
      return factor(n/i, fqm_ptr);
    }
    i++;
  }
  push(fqm_ptr, n);
  return 0;
}
