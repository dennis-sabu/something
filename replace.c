#include <stdio.h>
#include <string.h>

void replaceWord(char *str, const char *oldWord, const char *newWord) {
    char temp[1000];
    char *pos, *start = str;
    int index = 0;
    int oldWordLen = strlen(oldWord);
    int newWordLen = strlen(newWord);

    while ((pos = strstr(start, oldWord)) != NULL) {
        strncpy(temp + index, start, pos - start);
        index += pos - start;
        strcpy(temp + index, newWord);
        index += newWordLen;
        start = pos + oldWordLen;
    }
    strcpy(temp + index, start);
    strcpy(str, temp);
}

int main() {
    char str[1000], oldWord[100], newWord[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    
    printf("Enter the word to be replaced: ");
    scanf("%s", oldWord);
    
    printf("Enter the new word: ");
    scanf("%s", newWord);
    
    replaceWord(str, oldWord, newWord);
    
    printf("Modified string: %s\n", str);
    
    return 0;
}
