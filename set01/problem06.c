#include <stdio.h>

int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main(void) {
  int a, b, c;

  printf("Enter a : ");
  a = input();
  printf("Enter b : ");
  b = input();
  printf("Enter c : ");
  c = input();

  int largest;
  compare(a, b, c, &largest);

  output(a, b, c, largest);
  return 0;
}

int input() {
  int a;
  scanf(" %d", &a);
  return a;
}
void compare(int a, int b, int c, int *largest) {
  *largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
}
void output(int a, int b, int c, int largest) {
  printf("The largest of %d, %d and %d is %d", a, b, c, largest);
}