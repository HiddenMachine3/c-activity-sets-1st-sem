
#include <stdio.h>


int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main(){
    int a = input();
    int b = input();
    int sum;
    add(a,b,&sum);
    output(a,b,sum);


    return 0;
}

int input() {
  int a;
  printf("Enter a number : ");
  scanf(" %d", &a);
  return a;
}

void output(int a, int b, int c) {
  printf("The sum of %d, and %d is %d", a, b, c);
}

void add(int a, int b, int* c) {
  *c = a + b;
}