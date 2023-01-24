#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(void) {
  
  int a = input();
  int b = input();
  int gcd = find_gcd(a, b);
  output(a,b,gcd);
  
  return 0;
}

int input(){
  printf("Enter number : ");
  int n ;
  scanf(" %d",&n);
  return  n;
}
int find_gcd(int a, int b){
  /**
  finding hcf using euclid's method

*/
  
  if(b>a){//swap the numbers if b>a
    int temp = a;
    a = b;
    b = temp;
  }
  
  int r  = a%b;
  int q  = (a-r)/b;
  int bq = b*q;

  while(r>0){
  if(b>a){//swap the numbers if b>a
    int temp = a;
    a = b;
    b = temp;
  }
    
    //a = bq + r where 0 ≤ r < b;
    r =  a%b;

    bq = a-r;
    q = bq/b;
    a = b;
    b = r;
  }

  return b;
  
}
void output(int a, int b, int gcd){
  printf("The gcd of %d and %d is %d",a,b,gcd);
}