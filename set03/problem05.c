#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
    int size = input_array_size();
    if(size != 0)
        size++;
    int a[size];
    init_array(size, a);

    erotosthenes_sieve(size, a);

    output(size, a);

    return 0;
}

int input_array_size()
{
    int n;
    printf("Enter the size of the array : ");
    scanf(" %d", &n);
    return n;
}
void init_array(int n, int a[n])
{
    for (int i = 0; i < n; a[i] = -1, i++)
        ;
}
void erotosthenes_sieve(int n, int a[n])
{
    if (n > 1)
    {
        a[0] = 0;
        a[1] = 1;
        int multiple;

        for (int i = 2; i < n; i++)
        {
            int is_prime = a[i];

            if (is_prime == 0)
                continue;

            a[i] = 1; // setting is_prime to true
            multiple = 2 * is_prime;
            for (int j = 2; multiple < n; j++)
            {
                multiple = j * i;
                a[multiple] = 0;
            }
        }
    }
}
void output(int n, int a[n])
{
    for (int i = 2; i < n; i++)
    {
        if (a[i] == 1)
            printf(" %d", i);
    }
}