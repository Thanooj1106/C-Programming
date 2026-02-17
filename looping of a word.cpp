#include <stdio.h>

int main() {
    int i, j;
    char word[] = "HELLO";

    for(i = 0; word[i] != '\0'; i++) {
        for(j = 0; j <= i; j++) {
            printf("%c ", word[j]);
        }
        printf("\n");
    }

    return 0;
}

