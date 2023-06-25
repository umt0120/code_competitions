#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part) {
  *int_part = (long)x;
  *frac_part = x - *int_part;
}

int main() {
  long n;
  double d;
  decompose(3.14159, &n, &d);
  printf("n: %ld, d: %f\n", n, d);
}
