#include <stdio.h>

typedef struct
{
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
int find_lcm(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction f3);

int main()
{
    Fraction a = input_fraction(), b = input_fraction();

    Fraction c = add_fractions(a, b);

    output(a, b, c);

    return 0;
}

Fraction input_fraction()
{
    Fraction f1;
    printf("Enter the numerator  and denominator respectively of the fraction :\n");
    scanf("%d %d", &f1.num, &f1.den);
    return f1;
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction f3;
    f3.den = find_lcm(f1.den, f2.den);
    f3.num = (f1.num * (f3.den / f1.den)) + (f2.num * (f3.den / f2.den));
    return f3;
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("%d/%d + %d/%d = %d/%d", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
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