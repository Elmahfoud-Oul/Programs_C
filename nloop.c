#include <stdio.h>

int main() {
int n,i;
float s;
n=9;
s=0.0f;
for (i=1;i<=n;i++){
 s+=(1.0f/i);
}

printf("Result: %.3f", s);
  return 0;
}