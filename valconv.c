#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char entry[512];
    char* end;
    end = malloc(4);
    while(1) {
        bzero(entry, 512);
        gets(entry);
        printf("got %s\n", entry);
        printf("> %s\n", strtol(entry, &end, 16));
    }
    return 0;
}