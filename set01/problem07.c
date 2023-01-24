#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main(void) {
  int n = input_n();
  int sum = sum_n_nos(n);
  output(n, sum);
  return 0;
}

int input_n() {
  int n;
  printf("Enter n : ");
  scanf(" %d", &n);
  return n;
}
int sum_n_nos(int n) {
  int sum = 0;
  for (int i = 1; i <= n; sum += i, i++)
    ;
  return sum;
}
void output(int n, int sum) {
  printf("The sum of natural numbers till %d is %d", n, sum);
}