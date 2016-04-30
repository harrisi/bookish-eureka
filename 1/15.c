#include <stdio.h>

float ctof(float cels);

main() {
    float cels, fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    printf("%2c %4c\n", 'F', 'C');
    for (cels = lower; cels <= upper; cels = cels + step) {
        fahr = ctof(cels);
        printf("%3.0f %5.1f\n", fahr, cels);
    }
}

float ctof(float cels) {
    return (9.0 / 5.0) * cels + 32;
}
