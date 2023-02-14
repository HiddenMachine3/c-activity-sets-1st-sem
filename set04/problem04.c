#include <stdio.h>
#include <math.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main()
{
    int n = input_degree()+1;
    float a[n];
    float x = input_x();
    input_coefficients(n, a);
    float res = evaluate_polynomial(n, a, x);
    output(n, a, x, res);
    return 0;
}

int input_degree()
{
    int degree;
    printf("Enter the degree : ");
    scanf("%d", &degree);
    return degree;
}
void input_coefficients(int n, float a[n])
{
    printf("Enter %d coefficients : \n",n);
    for (int i = 0; i < n; i++){
        printf("a_%d : ",i);
        scanf("%f", &a[i]);
    }
}
float input_x()
{
    float x;
    printf("x : ");
    scanf("%f", &x);
    return x;
}
float evaluate_polynomial(int n, float a[n], float x)
{
    float res = a[n - 1];
    for (int i = n - 1; i > 0; i--)
        res = a[i - 1] + x * res;

    return res;
}
void output(int n, float a[n], float x, float result)
{
    //printf("H(1, 1, 1) = 1.00 + 1.00 * 1.00^1 = 2.0000000");
    printf("H(");
    for (int i = 0; i < n; printf("%f, ", a[i]), i++)
        ;
    printf(") = ");

    for (int i = 0; i < n; printf("%f*x^%d +", a[i], i), i++)
        ;

    printf(" = %f",result);
}