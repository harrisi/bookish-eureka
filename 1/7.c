#include <stdio.h>

main() {
    int c;

    printf("%i\n", EOF);
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
