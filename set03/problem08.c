#include <stdio.h>
#include <math.h>

typedef struct point
{
    float start_end_x, start_end_y;
} Point;

typedef struct line
{
    Point p;
    float distance;
} Line;

typedef struct polygon
{
    int sides;
    Line l[100];
    float perimeter;
} Polygon;

int input_n();
Line input_line();
void input_n_lines(int n, Line *l);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_n_distance(int n, Line *l);
void find_perimeter(Polygon *p);
void output(Polygon p);

int main()
{
    Polygon p;
    input_polygon(&p);
    find_perimeter(&p);
    output(p);
    return 0;
}

int input_polygon(Polygon *p)
{
    int n = input_n();
    p->sides = n;
    input_n_lines(n, p->l);
    find_n_distance(n, p->l);
    return p->sides;
}

void output(Polygon p)
{
    printf("The perimeter of the polynomial is %.5f", p.perimeter);
}

int input_n()
{
    int n;
    printf("Enter the number of sides of the polygon : ");
    scanf(" %d", &n);
    printf("\n");
    return n;
}
Line input_line()
{
    float x, y;
    printf("x : ");
    scanf(" %f", &x);
    printf("y : ");
    scanf(" %f", &y);

    Point p = {.start_end_x = x, .start_end_y = y};
    Line l = {.p = p};
    return l;
}
void input_n_lines(int n, Line *l)
{
    for (int i = 0; i < n; i++)
    {
        printf("Input the coordinates of point %d (x,y) : \n", i + 1);
        l[i] = input_line();
        printf("\n");
    }
}

float find_distance(Point a, Point b)
{
    return sqrt(pow(b.start_end_x - a.start_end_x, 2) + pow(b.start_end_y - a.start_end_y, 2));
}
void find_n_distance(int n, Line *l)
{
    for (int i = 0, next = 1; i < n; i++)
    {
        if (i == n - 1)
            next = 0;
        else
            next = i + 1;
        l[i].distance = find_distance(l[i].p, l[next].p);
    }
}
void find_perimeter(Polygon *p)
{
    float sum = 0;
    for (int i = 0, n = p->sides; i < n; i++)
        sum += (p->l)[i].distance;
    p->perimeter = sum;
}
