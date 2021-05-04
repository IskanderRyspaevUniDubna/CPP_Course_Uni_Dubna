#include "Factorial.h"
int factorial(int n) 
{
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}
int iter_factorial(int n) 
{
	int res = 1;
	if (n == 0) return res;
	else {
		for (int i = 1; i <= n; i++) {
			res *= i;
		}
	}
	return res;
}