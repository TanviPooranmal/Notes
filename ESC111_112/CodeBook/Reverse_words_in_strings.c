#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

void reverseWords(char *sentence) {
    int length = strlen(sentence);

    // Reverse the entire sentence
    int i = 0, j = length - 1;
    while (i < j) {
        char temp = sentence[i];
        sentence[i] = sentence[j];
        sentence[j] = temp;
        i++;
        j--;
    }

    // Reverse individual words
    i = 0;
    while (i < length) {
        j = i;
        while (sentence[j] != ' ' && sentence[j] != '\0') {
            j++;
        }
        int start = i, end = j - 1;

        // Reverse the word
        while (start < end) {
            char temp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = temp;
            start++;
            end--;
        }

        // Move to the next word
        i = j + 1;
    }
}

int main() {
    char sentence[MAX_LENGTH];

    fgets(sentence, sizeof(sentence), stdin);

    reverseWords(sentence);

    printf("%s\n", sentence);

    return 0;
}