#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(void) {
  int a = input_side(), b = input_side(), c = input_side();

  int isscalene = check_scalene(a, b, c);

  output(a, b, c, isscalene);
  return 0;
}

int input_side() {
  int side;
  printf("Enter side of the triangle : ");
  scanf("%d", &side);
  return side;
}
int check_scalene(int a, int b, int c) { return a != b && b != c; }
void output(int a, int b, int c, int isscalene) {
  printf("The triangle with sides %d, %d and %d is %sscalene", a, b, c,
         isscalene ? "" : "not ");
}