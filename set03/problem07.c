#include <stdio.h>
#include <math.h>

typedef struct point
{
    float x, y;
} Point;

typedef struct line
{
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
    Line l = input_line();
    find_length(&l);
    output(l);
    return 0;
}

Point input_point()
{
    float x, y;
    printf("Input the values of the point : \n");
    printf("x : ");
    scanf(" %f", &x);
    printf("y : ");
    scanf(" %f", &y);
    printf("\n");

    Point p = {.x = x, .y = y};
    return p;
}
Line input_line()
{
    Line l = {.p1 = input_point(), .p2 = input_point()};
    return l;
}
void find_length(Line *l)
{
    //(*l).distance = pow((*l).p1.x - (*l).p2.x, 2) + pow((*l).p1.y - (*l).p2.y, 2);
    l->distance = sqrt(pow(l->p1.x - l->p2.x, 2) + pow(l->p1.y - l->p2.y, 2));
}
void output(Line l)
{
    printf("The distance between the points (%.3f,%.3f) and (%.3f,%.3f) is %.4f",
           l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}