#include <stdio.h>

main() {
    int is_it_really = getchar() != EOF;

    printf("%d", is_it_really);
}