#include "binomial.h"
#include "factorial.h"

double binomial(int m, int n) {
	double denominator = (double)(factorial(m-n) * factorial(n));
	return (double)factorial(m) / denominator;
}