
#include <stdio.h>


int input();
int add(int a, int b);
void output(int a, int b, int sum);

int main(){
    int a = input();
    int b = input();
    int sum  = add(a,b);
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

int add(int a, int b) {
    return a + b;
}