#include <stdio.h>

struct _complex {
  float real;
  float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main(void) {
  Complex a = input_complex();
  Complex b = input_complex();

  Complex c = add_complex(a, b);
  output(a, b, c);
  return 0;
}

Complex input_complex() {
  printf(
      "Enter the complex the real and imaginary part of the complex number\n");
  float real, imag;

  scanf(" %f", &real);
  scanf(" %f", &imag);

  Complex a = {.real = real, .imaginary = imag};
  return a;
}
Complex add_complex(Complex a, Complex b) {
  Complex c = {.real = a.real + b.real, .imaginary = a.imaginary + b.imaginary};
  return c;
}
void output(Complex a, Complex b, Complex sum) {
  printf("The sum of %.2f+%.2fi and %.2f+%.2fi is %.2f+%.2fi", a.real,
         a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}