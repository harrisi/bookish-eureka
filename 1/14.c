#include <stdio.h>

#define CHAR_LOW 33
#define CHAR_HIGH 126

main() {
    int i, j;
    int ndigit[CHAR_HIGH + 1];
    char c;

    for (i = 0; i <= CHAR_HIGH + 1; i++) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= CHAR_LOW && c <= CHAR_HIGH) {
            ndigit[c]++;
        }
    }

    printf("output:\n");
    for (i = CHAR_LOW; i <= CHAR_HIGH; i++) {
        printf("%c: ", i);
        for (j = 1; j <= ndigit[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
