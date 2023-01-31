#include <stdio.h>

typedef struct
{
    int num, den;
} Fraction;

Fraction input();
void output(Fraction a, Fraction b, Fraction c, Fraction s);
Fraction smallest(Fraction a, Fraction b, Fraction c);
float fracToFloat(Fraction a);

int main()
{
    Fraction a = input(), b = input(), c=input();
    output(a, b, c, smallest(a, b, c));
    return 0;
}

Fraction input(){
    Fraction a;
    printf("Enter the numerator and denominator respectively : \n");
    scanf("%d %d",&(a.num),&(a.den));
    return a;
}

void output(Fraction a, Fraction b, Fraction c, Fraction s)
{
    printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",
           a.num, a.den, b.num, b.den, c.num, c.den, s.num, s.den);
}

Fraction smallest(Fraction a, Fraction b, Fraction c)
{
    float af = fracToFloat(a), bf = fracToFloat(b), cf = fracToFloat(c);
    if (af < bf)
    {
        if (af < cf)
            return a;
        else if (bf < cf)
            return b;
        else
            return c;
    }
    else
    {
        if (bf < cf)
            return b;
        else
            return c;
    }
}

float fracToFloat(Fraction a)
{
    return (float)a.num / (float)a.den;
}