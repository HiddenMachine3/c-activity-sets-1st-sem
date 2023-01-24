#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main(void) {
  int n = input_array_size();
  int arr[n];
  input_array(n, arr);
  int sum = sum_n_array(n, arr);
  output(n, arr, sum);
  return 0;
}
/*
Input array size: 3
Input the array:
1 7 11
*/
int input_array_size() {
  int n;
  printf("Input array size: ");
  scanf(" %d", &n);
  return n;
}
void input_array(int n, int a[n]) {
  printf("Input the array: \n");
  for (int i = 0; i < n; scanf(" %d", &a[i]), i++)
    ;
}
int sum_n_array(int n, int a[n]) {
  int sum = 0;
  for (int i = 0; i < n; sum += a[i], i++)
    ;
  return sum;
}

// 1+7+11 is 19
void output(int n, int a[n], int sum) {
  for (int i = 0; i < (n - 1); printf("%d+", a[i]), i++)
    ;
  printf("%d is %d", a[n - 1], sum);
}