#include <stdio.h>
#include <math.h>

typedef struct _camel
{
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

void find_weight(Camel *c);
Camel inputCamel();

int main()
{
    int n;
    float truck_weight, total_weight;

    printf("Enter the number of camels : ");
    scanf(" %d", &n);

    Camel c[n];

    input(n, c, &truck_weight);
    find_camel_weight(n, c);
    total_weight = compute_total_weight(n, c, truck_weight);
    output(total_weight);
    
    return 0;
}

void input(int n, Camel c[n], float *truck_weight)
{
    for (int i = 0; i < n; c[i] = inputCamel(), i++)
        ;
    printf("Enter the truck weight : ");
    scanf(" %f", truck_weight);
}

void find_camel_weight(int n, Camel c[n])
{
    for (int i = 0; i < n; find_weight(&c[i]), i++)
        ;
}

void find_weight(Camel *c)
{
    c->weight = M_PI * pow(c->radius, 3) * sqrt(c->height * c->length);
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    float total_weight = truck_weight;
    for (int i = 0; i < n; i++)
        total_weight += c[i].weight;

    return total_weight;
}

Camel inputCamel()
{
    Camel c;

    printf("Enter the details for the camel:\n");
    printf("radius : ");
    scanf(" %f", &(c.radius));
    printf("height : ");
    scanf(" %f", &(c.height));
    printf("length : ");
    scanf(" %f", &(c.length));

    printf("\n");

    return c;
}
void output(float total_weight)
{
    printf("The Total weight of the truck is: %.5f", total_weight);
}