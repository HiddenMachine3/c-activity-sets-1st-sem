#include <stdio.h>
#include <string.h>

void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);

int main()
{
    char s[50], substring[50];

    input_string(s, substring);
    int index = sub_str_index(s, substring);
    output(s, substring, index);
    return 0;
}

void input_string(char *a, char *b)
{
    printf("Enter the string you want to find the substring in : ");
    scanf(" %s", a);
    printf("Enter the substring you want to find the string in : ");
    scanf(" %s", b);
}
int sub_str_index(char *string_pointer, char *substring_pointer)
{
    char *index_pointer = strstr(string_pointer, substring_pointer);

    if (index_pointer == NULL) // string not found
        return -1;

    return index_pointer - string_pointer;
}
void output(char *string, char *substring, int index)
{
    if (index != -1)
        printf("The index of '%s' in '%s' is %d", substring, string, index);
    else
        printf("'%s' is not found in '%s'", substring, string);
}