#include <stdio.h>
#include <math.h>


struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); //passing address variable
void output(Camel c);


int main()
{
    Camel c = input();
    find_weight(&c);
    output(c);
    return 0;
}

void find_weight(Camel *c){
    c->weight = M_PI * pow(c->radius,3) * sqrt(c->height * c->length);
}
void output(Camel c){
     printf("The weigth of the camel having a stomach radius, height and length %f, %f, %f is %.5f",
    c.radius,c.height,c.length,c.weight);
}

Camel input(){
    Camel c;
    printf("Enter the details for the camel:\n");
    printf("radius : ");
    scanf(" %f",&(c.radius));
    printf("height : ");
    scanf(" %f",&(c.height));
    printf("length : ");
    scanf(" %f",&(c.length));

    return c;
}