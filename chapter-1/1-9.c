#include <stdio.h>

main() {
    char prev, c;

    while((c = getchar()) != EOF) {
        if(c != ' ' || prev != ' ') putchar(prev = c);
    }
}