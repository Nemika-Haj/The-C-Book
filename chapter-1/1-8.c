#include <stdio.h>

main() {
    int c, tabs, blanks, new_lines;

    tabs = blanks = new_lines = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n') ++new_lines;
        else if(c == '\t') ++tabs;
        else if(c == ' ') ++blanks;
    }

    printf("Blanks: %d\nTabs: %d\nNew Lines: %d\n", blanks, tabs, new_lines);
}