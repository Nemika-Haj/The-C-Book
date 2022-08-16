#include <stdio.h>

#define STEP 20

float temp_convert(int F) {

    return (5.0/9.0) * (F - 32.0);
}

int main() {

    int fahr;
    float cels;

    for(fahr = 0; fahr < 300; fahr += STEP) {
        cels = temp_convert(fahr);
        printf("%3d\t%6.2f\n", fahr, cels);
    }

    return 0;
}