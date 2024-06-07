#include <stdio.h>
#include <string.h>

int countWords(char sentence[]) {
    int count = 0;
    int isWord = 0; // Flag to track if a word is in progress

    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            isWord = 0;
        } else if (isWord == 0) {
            isWord = 1;
            count++;
        }
    }

    return count;
}

int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int words = countWords(sentence);

    printf("Number of words: %d\n", words);
    return 0;
}
