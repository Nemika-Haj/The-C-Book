#include <stdio.h>

// Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above.

main() {
    printf("Hello world\n");
    printf("Hello world\a");
}