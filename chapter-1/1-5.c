#include <stdio.h>

main() {
    int fahr;
    float cels;

    printf("Some very cool heading\n");

    for (fahr = 300; fahr >= 0; fahr -= 20) {
        cels = (5.0/9.0) * (fahr-32);
        printf("%3d\t%6.1f\n", fahr, cels);
    }
}