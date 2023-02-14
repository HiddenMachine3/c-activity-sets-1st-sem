#include <stdio.h>
/**Write a program to find the average of all the odd elements in an array*/
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
    int n = input_n();
    int arr[n];
    input(n,arr);
    float avg = odd_average(n,arr);
    output(avg);
    
    return 0;
}

int input_n()
{
    int n;
    printf("Enter n : ");
    scanf(" %d", &n);
    return n;
}
void input(int n, int a[n])
{
    printf("Enter %d elements  : \n");
    for (int i = 0; i < n; scanf(" %d", &a[i]), i++)
        ;
}
float odd_average(int n, int a[n])
{
    float sum = 0;
    for (int i = 0; i < n; sum += a[i], i++)
        ;
    return sum / n;
}
void output(float avg)
{
    printf("Average of all the odd elements is: %f", avg);
}