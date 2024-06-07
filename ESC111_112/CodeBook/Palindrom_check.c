#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int str_reverse(char x[], int y){
    int start = 0;
    int end = strlen(x) - 1;

    for (start=0; start<end; start++, end--){
        char temp = x[start];
        x[start] = x[end];
        x[end] = temp;
    }
    }

int palindrome_checker(char sample_str, int length){
    str_reverse(sample_str, length);
    return 0;
}


int main(){
    char sample_str[999];
    printf("Enter a string: ");
    fgets(sample_str, strlen(sample_str), stdin);
    size_t length=strlen(sample_str);
    palindrome_checker(sample_str, length);
    return 0;
}