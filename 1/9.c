#include <stdio.h>

main() {
    int c = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(c);
            while ((c = getchar()) == ' ')
                ;
        } else if (c == '\t') {
            putchar(c);
            while ((c = getchar()) == '\t')
                ;
        } else if (c == '\n') {
            putchar(c);
            while ((c = getchar()) == '\n')
                ;
        }
        putchar(c);
    }
}
