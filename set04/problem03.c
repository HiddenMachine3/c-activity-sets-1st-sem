#include <stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);
int fact(int n);

int main()
{

    int n, r, ncr;
    input_n_and_r(&n, &r);
    ncr = nCr(n, r);
    output(n, r, ncr);

    return 0;
}

void input_n_and_r(int *n, int *r)
{
    printf("n : ");
    scanf("%d", n);
    printf("r : ");
    scanf("%d", r);
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
void output(int n, int r, int result)
{
    printf("for n = %d and r = %d, nCr = %d", n, r, result);
}
int fact(int n)
{
    int f = 1;
    while (n > 1)
        f *= n--;
    return f;
}