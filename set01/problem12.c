#include <stdio.h>

struct _complex {
  float real;
  float imaginary;
};
typedef struct _complex Complex;

int get_n();

Complex input_complex();
void input_n_complex(int n, Complex c[n]);

Complex add_complex(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);

void output(int n, Complex c[], Complex result);

int main(void) {
  int n = get_n();
  Complex numbers[n];
  input_n_complex(n, numbers);

  Complex result = add_n_complex(n, numbers);
  output(n, numbers, result);
  return 0;
}

int get_n() {
  int n;
  printf("Enter the number of complex numbers : ");
  scanf(" %d", &n);
  return n;
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

void input_n_complex(int n, Complex c[n]) {
  for (int i = 0; i < n; i++) {
    c[i] = input_complex();
  }
}

Complex add_complex(Complex a, Complex b) {
  Complex c = {.real = a.real + b.real, .imaginary = a.imaginary + b.imaginary};
  return c;
}

Complex add_n_complex(int n, Complex c[n]) {
  Complex result = {.real = 0, .imaginary = 0};
  for (int i = 0; i < n; i++) {
    result = add_complex(result, c[i]);
  }
  return result;
}

void output(int n, Complex c[], Complex result) {
  printf("The sum of ");
  printf("%.2f+%.2fi", c[0].real, c[0].imaginary);
  for (int i = 1; i < n; i++) {
    printf(" + %.2f+%.2fi", c[i].real, c[i].imaginary);
  }
  printf(" is %.2f+%.2fi", result.real, result.imaginary);
}