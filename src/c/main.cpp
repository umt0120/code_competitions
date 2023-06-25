#include <stdio.h>

int main () {
  int a = 10;
  printf("     a: = %d\n", a);

  int *p = &a;
  printf("     p: = %p\n", p);
  printf("    *p: = %d\n", *p);

  int **pp = &p;
  printf("    pp: = %p\n", pp);
  printf("   *pp: = %p\n", *pp);
  printf("  **pp: = %d\n", **pp);
}
