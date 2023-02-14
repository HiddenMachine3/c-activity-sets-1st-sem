#include <stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
    char name[100];
    input(name);
    int res = has_nice_name(name);
    output(res);
    return 0;
}

void input(char *name)
{
    printf("Enter a name : ");
    fgets(name, 100, stdin);
}

/*
A camel has a nice name if it has at least 2 vowels and 2 consonants in it
*/
int has_nice_name(char *c)
{
    int res, vowels = 0, consonants = 0, i;

    for (char ch = c[0], i = 0; ch != '\0'; ++i, ch = c[i])
    {
        /*
        if its upper case, we convert it to lower case
        */
        if (ch >= 65 && ch <= 90)
            ch += 32;

        if (ch >= 97 && ch <= 122) // if its a letter in the alphabet
            switch (ch)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default: // implies that its a consonant
                consonants++;
                break;
            }
    }

    if (vowels >= 2 && consonants >= 2)
        return 1;
    else
        return 0;
}
void output(int res)
{
    printf("The camel does%s have a nice name", res ? "" : " not");
}