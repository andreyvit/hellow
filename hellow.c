#include <stdio.h>
#include <string.h>

#define DEBUG_PASSWORD "secret"

// COOL!
int main(int argc, char **argv) {
    if (argc > 1 && 0 == strcmp("-p" DEBUG_PASSWORD, argv[1]))
        printf("Hello, master!\n");
    return 0;
}
