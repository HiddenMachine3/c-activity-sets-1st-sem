#include <stdio.h>
#include <math.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
    int n = input();

    output(n, find_fibo(n));

    return 0;
}

int input()
{
    int n;
    printf("Enter the number : ");
    scanf(" %d", &n);
    return n;
}

int find_fibo(int n)
{
    // 0, 1, 1, 2, 3, 5, 8, 13, ...
    int a = 0,b =1, temp;

    for(int i =0;i<n;i++){
        temp = a;
        a = b;
        b = temp + b;
    }

    return a;
}

void output(int n, int fibo)
{
    printf("fibo(%d) = %d", n, fibo);
}