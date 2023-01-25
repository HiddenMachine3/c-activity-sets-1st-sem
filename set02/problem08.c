#include <stdio.h>

typedef struct _triangle
{
    float base, altitude, area;
} Triangle;

Triangle input_triangle();

int input_n();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
    int n = input_n();
    Triangle triangles[n];
    input_n_triangles(n, triangles);
    find_n_areas(n, triangles);
    Triangle smallest = find_smallest_triangle(n, triangles);
    output(n, triangles, smallest);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the number of triangles you want to input : ");
    scanf(" %d", &n);
    return n;
}

Triangle input_triangle()
{
    float base, height;
    printf("Enter the base of the triangle : ");
    scanf(" %f", &base);
    printf("Enter the height of the triangle : ");
    scanf(" %f", &height);
    Triangle t = {.base = base, .altitude = height};
    return t;
}

void input_n_triangles(int n, Triangle t[n])
{
    printf("Enter the details of the triangles : \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details for triangle %d:\n", i + 1);
        t[i] = input_triangle();
        printf("\n");
    }
}

void find_area(Triangle *t)
{
    (*t).area = 0.5f * (*t).base * (*t).altitude;
}

void find_n_areas(int n, Triangle t[n])
{
    for (int i = 0; i < n; i++)
    {
        find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    int s = 0; // s is the index of the triangle with smallest area
    for (int i = 1; i < n; i++)
    {
        if (t[i].area < t[s].area)
            s = i;
    }
    return t[s];
}

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest triangle out of triangles with base and height ");
    printf("(%.3f,%.3f)", t[0].base, t[0].altitude);
    for (int i = 0; i < n; i++)
        printf(" , (%.3f,%.3f)", t[i].base, t[i].altitude);

    printf(" is the triangle having base %.3f, height %.3f and area %.3f", smallest.base, smallest.altitude, smallest.area);
}