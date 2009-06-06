#include <stdio.h>
#include <string.h>

void main(int argc, char **argv) {
    if (argc > 1 && 0 == strcmp("-psecret", argv[1]))
        printf("Hello, master!\n");
    else
        printf("Hello, world!\n");
}
