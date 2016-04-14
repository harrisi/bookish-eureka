#include <stdio.h>

main() {
    int c, nb, nt, nn;

    c = nb = nt = nn = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++nb;
        } else if (c == '\t') {
            ++nt;
        } else if (c == '\n') {
            ++nn;
        }
    }
    printf("nb, nt, nn\n");
    printf("%2i, %2i, %2i\n", nb, nt, nn); 
}
