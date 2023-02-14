#include <stdio.h>

typedef struct
{
    int num, den;
} Fraction;

int input_n();
void input_n_fractions(int n, Fraction f[n]);
Fraction add_n_fractions(int n, Fraction f[n]);

Fraction input_fraction();
int find_gcd(int a, int b);
int find_lcm(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(int n, Fraction f[n], Fraction sum);

int main()
{
    int n = input_n();
    Fraction f[n];
    input_n_fractions(n, f);

    Fraction sum = add_n_fractions(n, f);

    output(n, f, sum);

    return 0;
}

int input_n()
{
    int n;
    printf("Enter the number of fractions : ");
    scanf(" %d", &n);
    return n;
}
void input_n_fractions(int n, Fraction f[n])
{
    for (int i = 0; i < n; f[i] = input_fraction(), i++)
        ;
}
Fraction input_fraction()
{
    Fraction f1;
    printf("Enter the numerator  and denominator respectively of the fraction :\n");
    scanf("%d %d", &f1.num, &f1.den);
    return f1;
}


Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum = f[0];
    for (int i = 0; i < (n - 1); i++)
    {
        sum = add_fractions(sum, f[i + 1]);
    }
    return sum;
}


Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction f3;
    f3.den = find_lcm(f1.den, f2.den);
    f3.num = (f1.num * (f3.den / f1.den)) + (f2.num * (f3.den / f2.den));
    return f3;
}
void output(int n, Fraction f[], Fraction sum)
{
    int i = 0;
    printf("%d/%d ", f[i].num, f[i].den);
    for (i = 1; i < n; i++)
    {
        printf("+ %d/%d ", f[i].num, f[i].den);
    }
    printf("= %d/%d", sum.num, sum.den);
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