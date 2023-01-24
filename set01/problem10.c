#include <stdio.h>
#include <string.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main(void) {
  char a1[50], a2[50];
  input_two_strings(a1, a2);

  output(a1, a2, stringcompare(a1, a2));
  return 0;
}

void input_two_strings(char *string1, char *string2) {
  printf("Enter the first string: ");
  scanf(" %s", string1);
  printf("Enter the second string: ");
  scanf(" %s", string2);
}

void output(char *string1, char *string2, int result) {
  switch (result) {
  case 0:
    printf("The two strings are equal");
    break;
  default:
    if (result > 0)
      printf("%s is greater than %s", string1, string2);
    else
      printf("%s is greater than %s", string2, string1);
  }
}

int stringcompare(char *string1, char *string2) {
  return strcmp(string1, string2);
}