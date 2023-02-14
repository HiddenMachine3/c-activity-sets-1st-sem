#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
    float height, radius, length;
    input_camel_details(&radius, &height, &length);
    int mood = find_mood(radius, height, length);
    output(radius, height, length, mood);

    return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the details for the camel:\n");
    printf("radius : ");
    scanf(" %f", radius);
    printf("height : ");
    scanf(" %f", height);
    printf("length : ");
    scanf(" %f", length);
}
int find_mood(float radius, float height, float length)
{
    /**
     * - sick when its `stomach_radius` is less than `height` and less than `length`
- happy when its `height` is less than `length` and less than `stomach_radius`.
- tense when its `length` is less than `height` and `stomach_radius`.
    */
    if (radius < height && radius < length)
        return 1;
    if (height < length && height < radius)
        return 2;
    if (length < height && length < radius)
        return 3;
    else
        return -1;
}

void output(float radius, float height, float length, int mood)
{
    char *mood_text;
    switch (mood)
    {
    case 1:
        mood_text = "sick";
        break;
    case 2:
        mood_text = "happy";
        break;
    case 3:
        mood_text = "tense";
        break;
    default:
        mood_text =  "undefined";
    }
    printf("The mood of the camel having a stomach radius, height and length %f, %f, %f is %s",
           radius, height, length, mood_text); // todo: fill up properly
}