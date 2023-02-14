#include<stdio.h>
#include<string.h>
/*6. Write a program to count the number of words in a string using strtok (_string.h_)*/

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);


int main(){
    char string[100];
    input_string(string);

    output(string,count_words(string));
    return 0;
}

void input_string(char *a){
    printf("Enter the string : ");
    fgets(a, 30, stdin);
    // printf("%s",a);
}
int count_words(char *string){
    int n =0;
    char delim[2] = " ";
    char *word = strtok(string,delim);
    while(word != NULL){
        n++;
        word = strtok(NULL,delim);
    }

    return n;
}
void output(char *string, int no_words){
    printf("%s has %d words", string,no_words);
}