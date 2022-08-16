#include <stdio.h>

main() {
    int frequency['z'];

    char c;

    while((c == getchar()) != EOF) {
        if(c >= 'A' && c <= 'z') {
            ++frequency[c-1];
        }
    }

    int i, k;
    for(i = 'A'; i <= 'z'; i++) {
        printf('%c |', i);
        for(k = 0; k < frequency[i]; ++i){
            printf('=');
        }
        printf('\n');
    }

}