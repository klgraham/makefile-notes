#include <stdio.h>
#include <stdlib.h>
#include <binomial.h>

int main(int argc, char *argv[]) {
  int m = atoi(argv[1]);
	int n = atoi(argv[2]);
  printf("BinomialCoefficient(%d, %d) is %f\n", m, n, binomial(m, n));
  return 0;
}
