#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{

    char val[50], res[50];
    input_string(val);
    str_reverse(val, res);
    output(val, res);
    return 0;
}

void input_string(char *a)
{
    printf("Enter the string : ");
    scanf("%s", a);
}
void str_reverse(char *str, char *rev_str)
{

    /**
     * To reverse the string, just input
     * the characters from  the end of the
     *  str char[] to the start  of the rev  array in the reverse order
     */
    char character;
    int i=0;
    for (int end = strlen(str) - 1; end >= 0; end--, i++)
    {
        character = str[end];
        //printf("%c",character);
        rev_str[i] = character;
    }
    rev_str[i]='\0';//setting last charcter to null
    printf("\ninside the func  : %s\n",rev_str);
}
void output(char *a, char *reverse_a)
{
    printf("original : %s ,reverse :  %s", a, reverse_a);
}