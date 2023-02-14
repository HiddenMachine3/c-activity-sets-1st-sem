#include <stdio.h>
#include <math.h>

int input(int x);
float borga_X(int x);
void output(int x, float result);

int main()
{
    int x;
    printf("Enter x : ");
    scanf(" %d", &x);
    input(x);

    return 0;
}

int input(int x)
{
    float borga = borga_X(x);

    output(x, borga);
}

float borga_X(int x)
{ // 1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...`.
    // edge case
    if (x == 0)
        return 1;

    //initializing the terms
    float borga = 0, i = 1;
    float x_pow = 1, fact = 1;
    float term = 1;//first term is 1


    do{
        borga += term;//updating borga

        //updating variables needed to compute an individual term
        i += 2;
        x_pow *= x;
        fact *= i * (i - 1);
        term = x_pow / fact;
    }while (term > 0.000001);// Stop when the next term is less 0.000001

    return borga;
}

void output(int x, float result)
{
    printf("borga(%d) = %f", x, result);
}