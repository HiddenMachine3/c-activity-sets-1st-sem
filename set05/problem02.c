#include <stdio.h>
#include <math.h>


void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
    float height,weight,radius,length;
    input_camel_details(&radius,&height,&length);
    weight = find_weight(radius,height,length);
    output(radius,height,length,weight);

    return 0;
}

void input_camel_details(float *radius, float *height, float *length){
    printf("Enter the details for the camel:\n");
    printf("radius : ");
    scanf(" %f",radius);
    printf("height : ");
    scanf(" %f",height);
    printf("length : ");
    scanf(" %f",length);
}
float find_weight(float radius, float height, float length){
    return M_PI * pow(radius,3) * sqrt(height * length);
}
void output(float radius, float height, float length, float weight){
    printf("The weigth of the camel having a stomach radius, height and length %f, %f, %f is %.5f",
    radius,height,length,weight);
}