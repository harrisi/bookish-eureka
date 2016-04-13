#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%3c %5c\n", 'C', 'F');
    for (fahr = upper; fahr >= 0; fahr = fahr - 20) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%5.1f  %3.0f\n", celsius, fahr);
    }
}
