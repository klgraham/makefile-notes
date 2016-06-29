#include <stdio.h>
#include <stdlib.h>
#include <factorial.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("%d! is %d\n", n, factorial(n));
  return 0;
}
