#include <stdio.h>
#include "ntlib.h"

#define max(A,B) (A>B)?A:B
#define min(A,B) (A>B)?B:A

int isprime(int n) {
  int i = 2;
  while(i*i<=n){
    if (!(n%i)) return 0;
    i++;
  }
  return 1;
}

int gcd(int a, int b) {
  int mx = max(a,b);
  int mn = min(a,b);
  if (!(mx%mn)) return mn;
  else return gcd(mn,mx%mn);
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
