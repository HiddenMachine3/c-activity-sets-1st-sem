#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
  int n = input_number();
  output(n, is_composite(n));
  return 0;
}

int input_number() {
  printf("Enter a number : ");
  int n;
  scanf(" %d", &n);
  return n;
}
int is_composite(int n) {
  int iscomp = 0;
  for (int i = n - 1; i > 1; i--) {
    if (n % i == 0) {
      iscomp = 1;
      break;
    }
  }
  return iscomp;
}
void output(int n, int result) {
  printf("%d is %sa composite number.", n, result ? "" : "not ");
}