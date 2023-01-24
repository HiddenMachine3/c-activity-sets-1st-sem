#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int is_composite(int n);

int main(void) {
  int n = input_array_size();
  int arr[n];
  input_array(n, arr);
  int  sum = sum_composite_numbers(n, arr);
  output(sum);
  return 0;
}

int input_array_size() {
  int n;
  printf("Enter the size of the array : ");
  scanf(" %d", &n);
  return n;
}
void input_array(int n, int a[n]) {
  printf("Enter the elements :\n");
  for (int i = 0; i < n; scanf("  %d", &a[i]), i++)
    ;
}
int sum_composite_numbers(int n, int a[n]) {
  int sum = 0;
  for (int i = 0; i < n; i++)
    if (is_composite(a[i]))
      sum += a[i];
  return sum;
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

void output(int sum) { printf("The sum of composite numbers is : %d", sum); }