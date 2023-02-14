#include <stdio.h>
#include <math.h>


struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
    Point a = input(), b = input();
    float distance;
    dist(a,b,&distance);
    output(a,b,distance);

    return 0;
}

Point input(){
    Point p;
    printf("Enter the values for the point:\n");
    printf("x : ");
    scanf(" %f",&(p.x));
    printf("y : ");
    scanf(" %f",&(p.y));
    printf("\n");
    return p;
}
void dist(Point a, Point b, float *res){
    *res =  sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}
void output(Point a, Point b, float res){
    printf("The distance between point (%f, %f) and (%f, %f) is %.5f",
    a.x,a.y,b.x,b.y,res);
}