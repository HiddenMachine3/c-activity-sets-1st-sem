#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result);

int main()
{
    float x1, y1, x2, y2, x3, y3;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    int is_t = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, is_t);

    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the values of (x1,y1) , (x2,y2) and (x3,y3) in this order :\n");
    scanf(" %f %f %f %f %f %f", x1, y1, x2, y2, x3, y3);
    printf("\n");
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
    /**
     * if the area is 0, 0  itself would  be returned back implying that it is not a triangle, but a line  or a point
     */
    return 0.5 * ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
}

float find_distance(float x1, float y1, float x2, float y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result)
{
    printf("The points (%f, %f), (%f, %f) and (%f, %f) do%s form a triangle",
           x1, y1, x2, y2, x3, y3,
           result ? "" : " not");
}