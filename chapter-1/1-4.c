#include <stdio.h>

main() {
    int cels, fahr;

    printf("Some very cool heading\n");

    for (cels = 0; cels <= 100; cels += 10) {
        fahr = (9.0/5.0) * cels + 32;
        printf("%3d\t%6d\n", cels, fahr);
    }
}