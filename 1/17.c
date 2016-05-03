#include <stdio.h>
#define THRESHOLD 80

int mygetline(char[], int);

main() {
    int len;
    char c;
    char line[THRESHOLD];

    while ((len = mygetline(line, THRESHOLD + 1)) > 0) {
        if (len > THRESHOLD) {
            printf("%s", line);
            while ((c = getchar()) != '\n' && c != EOF) {
                putchar(c);
            }
            putchar('\n');
        }
    }
    return 0;
}

int mygetline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i) {
            s[i] = c;
    }

    if (c == '\n') {
        if (i < lim - 1) {
            s[lim - 1] = c;
        }
        ++i;
    }
    s[i] = '\0';
    return i;
}
