#include<stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main(){
    Triangle t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}

Triangle input_triangle(){
    float base,height;
    printf("Enter the base of the triangle : ");
    scanf(" %f",&base);
    printf("Enter the height of the triangle : ");
    scanf(" %f",&height);
    Triangle t = {.base = base, .altitude = height};
    return t;
}

void find_area(Triangle *t){
    (*t).area = 0.5f * (*t).base *(*t).altitude;
}

void output(Triangle t){
    printf("The area of triangle wwith base = %f and altitude = %f is %f",t.base,t.altitude,t.area);
}