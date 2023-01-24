#include <math.h>
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

int main(void) {
  float n = input();
  float root_n = square_root(n);
  output(n, root_n);
  return 0;
}

float input() {
  float n;
  printf("Enter number: ");
  scanf(" %f", &n);
  return n;
}
float square_root(float n) { return sqrt(n); }
void output(float n, float sqrroot) {
  printf("Square root of %.3f is %.3f", n, sqrroot);
}   