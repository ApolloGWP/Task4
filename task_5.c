#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv) {
    printf("PATH : %s\n", getenv(argv[1]));
    return(0);
}