#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main()
{
    float x1,y1,x2,y2;
    input(&x1,&y1,&x2,&y2);
    float dist = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,dist);

    return 0;
}

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the values of x1,y1 and x2,y2 in this order :\n");
    scanf(" %f %f %f %f", x1, y1, x2, y2);
    printf("\n");
}
float find_distance(float x1, float y1, float x2, float y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void output(float x1, float y1, float x2, float y2, float distance){
    printf("The distance between point (%f, %f) and (%f, %f) is %.5f",
    x1,y1,x2,y2,distance);
}