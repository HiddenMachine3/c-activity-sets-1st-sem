#include <stdio.h>
#include <math.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
    int n = input_number();

    output(n, is_prime(n));

    return 0;
}

int input_number()
{
    int n;
    printf("Enter the number : ");
    scanf(" %d", &n);
    return n;
}

int is_prime(int n)
{
    int prime = 1, original = n;
    n--;
    while (n > 1)
    {
        if ( original % n == 0)
        {
            prime = 0;
            //printf("%d is a multiple of %d with remainder %d\n",original,n,original%n);
            break;
        }

        n--;
    }

    return prime;
}

void output(int n, int result)
{
    printf("%d is%s a prime number", n, result ? "" : " not");
}