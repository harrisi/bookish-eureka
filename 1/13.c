#include <stdio.h>

#define IN 1
#define OUT 0
#define MAX_WORD 1000

main() {
    int c, nw, lw, state;
    // curChar, numWords, lenWord, state;
    int nword[MAX_WORD + 1];

    state = OUT;
    nw = lw = 0;

    for (int i = 0; i <= MAX_WORD + 1; i++) {
        nword[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            nword[lw]++;
            lw = 0;
        } else {
            state = IN;
            ++lw;
        }
    }
    printf("output:\n");
    for (int i = 1; i <= MAX_WORD; i++) {
        if (nword[i] > 0) {
            printf("length %3d: ", i);
            for (int j = 1; j <= nword[i]; j++) {
                putchar('*');
            }
            putchar('\n');
        }
    }
    return 0;
}
