#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
int find_gcd(int, int);
int find_lcm(int, int);

int main()
{
    int n1, d1, n2, d2, rn, rd;
    input(&n1, &d1, &n2, &d2);
    add(n1, d1, n2, d2, &rn, &rd);
    output(n1, d1, n2, d2, rn, rd);
    return 0;
}

void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the numerator  and denominator respectively of the 1st and 2d fraction in this order\n");
    scanf("%d %d %d %d", num1, den1, num2, den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_den = find_lcm(den1, den2);
    *res_num = (num1 * (*res_den/den1)) + (num2 * (*res_den/den2));
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d + %d/%d = %d/%d", num1, den1, num2, den2, res_num, res_den);
}

int find_lcm(int a, int b)
{
    int gcd = find_gcd(a, b);
    return (a * b) / gcd;
}

int find_gcd(int a, int b)
{
    /**
    finding hcf using euclid's method

  */

    if (b > a)
    { // swap the numbers if b>a
        int temp = a;
        a = b;
        b = temp;
    }

    int r = a % b;
    int q = (a - r) / b;
    int bq = b * q;

    while (r > 0)
    {
        if (b > a)
        { // swap the numbers if b>a
            int temp = a;
            a = b;
            b = temp;
        }

        // a = bq + r where 0 ≤ r < b;
        r = a % b;

        bq = a - r;
        q = bq / b;
        a = b;
        b = r;
    }

    return b;
}
